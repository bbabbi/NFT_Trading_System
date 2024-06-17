#ifndef ZKP_H
#define ZKP_H

#include <string>
#include <vector>

class ZKP {
public:
    std::string setupReg();
    std::string setupAcc();
    std::string PRF(const std::string &key, const std::vector<uint8_t> &data);
    std::string PRF(const std::string &data);
    std::string prove(const std::string &ek, const std::vector<std::string> &w);
    std::string prove(const std::string &ek, const std::vector<uint8_t> &data);
    std::string createTx(const std::string &CT_G, const std::string &π_regi);
    std::string commit(const std::string &writer, const std::string &fee, const std::string &buyerPublicKey);
    std::string commit(const std::string &data);
    std::string parseTx(const std::string &tx);
    bool verify(const std::string &vk, const std::string &π);
};

#endif // ZKP_H
