#include "blockchain/blockchain.h"
#include "zkp/zkp.h"
#include "smart_contract/smart_contract.h"
#include "encryption/encryption.h"
#include <iostream>

// Utility function to convert std::string to std::vector<uint8_t>
std::vector<uint8_t> stringToVector(const std::string &str) {
    return std::vector<uint8_t>(str.begin(), str.end());
}

// Utility function to convert std::vector<uint8_t> to std::string
std::string vectorToString(const std::vector<uint8_t> &vec) {
    return std::string(vec.begin(), vec.end());
}

Blockchain::PublicParams Blockchain::setup() {
    ZKP zkp;
    auto ekRegi = zkp.setupReg();
    auto vkRegi = zkp.setupReg();
    auto ekGen = zkp.setupAcc();
    auto vkGen = zkp.setupAcc();

    PublicParams pp = { ekRegi, vkRegi, ekGen, vkGen };
    return pp;
}

std::string Blockchain::registerContent(const PublicParams &pp, const std::string &encryptedContent) {
    ZKP zkp;
    Encryption encryption;
    std::vector<uint8_t> kG = encryption.generateRandomKey();
    std::string CT_G = encryption.encryptWithKey(encryptedContent, kG);
    std::string H_kG = zkp.PRF("ENAwriter", kG);
    std::string H_CT_G = zkp.PRF(CT_G);
    std::vector<std::string> w = { H_kG, H_CT_G, "ENAwriter" };

    auto π_regi = zkp.prove(pp.ekRegi, w);
    auto T_x_regi = zkp.createTx(CT_G, π_regi);
    return T_x_regi;
}

std::string Blockchain::generateTrade(const PublicParams &pp, const std::string &fee, const std::string &writerPublicKey, const std::string &writerSecretKey, const std::string &buyerPublicKey, const std::string &buyerSecretKey) {
    ZKP zkp;
    Encryption encryption;

    std::string Ord = encryption.encryptWithKey(writerPublicKey + fee, stringToVector(writerSecretKey));  // 비밀키로 암호화
    std::string cm = zkp.commit("ENAwriter", fee, buyerPublicKey);
    std::vector<std::string> w = { "H_kG", "ENAwriter", fee, buyerPublicKey };

    auto π_gen = zkp.prove(pp.ekGen, stringToVector(writerPublicKey + fee + buyerPublicKey));
    auto T_x_gen = zkp.createTx(Ord + cm + π_gen, π_gen);  // 트랜잭션 생성

    std::cout << "Debug: Ord: " << Ord << std::endl;
    std::cout << "Debug: cm: " << cm << std::endl;
    std::cout << "Debug: π_gen: " << π_gen << std::endl;
    std::cout << "Debug: T_x_gen: " << T_x_gen << std::endl;

    return T_x_gen;
}

void Blockchain::acceptRequest(const PublicParams &pp, const std::string &txGen, const std::string &writerSecretKey) {
    ZKP zkp;
    Encryption encryption;

    std::string parsedTx = zkp.parseTx(txGen);
    std::string Ord = encryption.decrypt(parsedTx.substr(0, parsedTx.size() / 2), stringToVector(writerSecretKey));  // 비밀키로 복호화
    std::string cm = zkp.commit(parsedTx.substr(parsedTx.size() / 2));

    std::vector<std::string> w = { "H_kG", "kG", parsedTx, writerSecretKey };
    auto π_accept = zkp.prove(pp.ekGen, stringToVector(parsedTx + writerSecretKey));
    bool result = zkp.verify(pp.vkGen, π_accept);

    std::cout << "Debug: parsedTx: " << parsedTx << std::endl;
    std::cout << "Debug: Ord: " << Ord << std::endl;
    std::cout << "Debug: cm: " << cm << std::endl;
    std::cout << "Debug: π_accept: " << π_accept << std::endl;
    std::cout << "Debug: verification result: " << result << std::endl;

    if (result) {
        std::cout << "Trade Accepted: Yes" << std::endl;
    } else {
        std::cout << "Trade Accepted: No" << std::endl;
    }
}
