#include <iostream>
#include "../blockchain/blockchain.h"
#include "../encryption/encryption.h"

void test_registerContent() {
    Blockchain blockchain;
    auto pp = blockchain.setup();

    std::string content = "디지털 콘텐츠 데이터";
    Encryption encryption;
    std::string encryptedContent = encryption.encrypt(content);

    auto txRegi = blockchain.registerContent(pp, encryptedContent);
    std::cout << "Register Content Tx: " << txRegi << std::endl;
}

void test_generateTrade() {
    Blockchain blockchain;
    auto pp = blockchain.setup();

    std::string writerPublicKey = "판매자 공개키";
    std::string writerSecretKey = "판매자 비밀키";
    std::string buyerPublicKey = "구매자 공개키";
    std::string buyerSecretKey = "구매자 비밀키";

    auto txGen = blockchain.generateTrade(pp, "fee", writerPublicKey, writerSecretKey, buyerPublicKey, buyerSecretKey);
    std::cout << "Generate Trade Tx: " << txGen << std::endl;
}

void test_acceptRequest() {
    Blockchain blockchain;
    auto pp = blockchain.setup();

    std::string writerSecretKey = "판매자 비밀키";
    std::string txGen = "거래 생성 Tx 데이터";

    blockchain.acceptRequest(pp, txGen, writerSecretKey);
    std::cout << "Accept Request Completed" << std::endl;
}

int main() {
    test_registerContent();
    test_generateTrade();
    test_acceptRequest();

    return 0;
}
