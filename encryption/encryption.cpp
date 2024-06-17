#include "encryption/encryption.h"
#include <sstream>
#include <iomanip>
#include <iostream>

std::vector<uint8_t> Encryption::generateRandomKey() {
    std::vector<uint8_t> key(32);
    RAND_bytes(key.data(), key.size());
    return key;
}

std::string Encryption::encryptWithKey(const std::string &data, const std::vector<uint8_t> &key) {
    std::string encrypted;
    // Simple XOR encryption for demonstration
    for (size_t i = 0; i < data.size(); ++i) {
        encrypted += data[i] ^ key[i % key.size()];
    }
    return encrypted;
}

std::string Encryption::decrypt(const std::string &data, const std::vector<uint8_t> &key) {
    std::string decrypted;
    // Simple XOR decryption for demonstration
    for (size_t i = 0; i < data.size(); ++i) {
        decrypted += data[i] ^ key[i % key.size()];
    }
    return decrypted;
}

std::string Encryption::hash(const std::string &data) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)data.c_str(), data.size(), hash);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}
