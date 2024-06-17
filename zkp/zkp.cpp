#include "zkp/zkp.h"
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>

std::string ZKP::setupReg() {
    return "ekRegi";
}

std::string ZKP::setupAcc() {
    return "ekAcc";
}

std::string ZKP::PRF(const std::string &key, const std::vector<uint8_t> &data) {
    std::string result;
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, key.c_str(), key.size());
    SHA256_Update(&sha256, data.data(), data.size());
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &sha256);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    result = ss.str();
    return result;
}

std::string ZKP::PRF(const std::string &data) {
    std::string result;
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, data.c_str(), data.size());
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &sha256);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    result = ss.str();
    return result;
}

std::string ZKP::prove(const std::string &ek, const std::vector<std::string> &w) {
    return "proof";
}

std::string ZKP::prove(const std::string &ek, const std::vector<uint8_t> &data) {
    return "proof";
}

std::string ZKP::createTx(const std::string &CT_G, const std::string &π_regi) {
    return CT_G + π_regi;
}

std::string ZKP::commit(const std::string &writer, const std::string &fee, const std::string &buyerPublicKey) {
    return writer + fee + buyerPublicKey;
}

std::string ZKP::commit(const std::string &data) {
    return data;
}

std::string ZKP::parseTx(const std::string &tx) {
    return tx.substr(0, tx.size() / 2);
}

bool ZKP::verify(const std::string &vk, const std::string &π) {
    return true;
}
