#include <zkp/zkp.h>
#include <openssl/evp.h>
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
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    if (mdctx == nullptr) throw std::runtime_error("Failed to create EVP_MD_CTX");

    if (EVP_DigestInit_ex(mdctx, EVP_sha256(), nullptr) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to initialize digest context");
    }

    if (EVP_DigestUpdate(mdctx, key.c_str(), key.size()) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to update digest with key");
    }

    if (EVP_DigestUpdate(mdctx, data.data(), data.size()) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to update digest with data");
    }

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int lengthOfHash = 0;
    if (EVP_DigestFinal_ex(mdctx, hash, &lengthOfHash) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to finalize digest");
    }

    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < lengthOfHash; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    result = ss.str();
    return result;
}

std::string ZKP::PRF(const std::string &data) {
    std::string result;
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    if (mdctx == nullptr) throw std::runtime_error("Failed to create EVP_MD_CTX");

    if (EVP_DigestInit_ex(mdctx, EVP_sha256(), nullptr) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to initialize digest context");
    }

    if (EVP_DigestUpdate(mdctx, data.c_str(), data.size()) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to update digest with data");
    }

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int lengthOfHash = 0;
    if (EVP_DigestFinal_ex(mdctx, hash, &lengthOfHash) != 1) {
        EVP_MD_CTX_free(mdctx);
        throw std::runtime_error("Failed to finalize digest");
    }

    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < lengthOfHash; ++i) {
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
