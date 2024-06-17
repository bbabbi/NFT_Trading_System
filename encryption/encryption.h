#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <vector>
#include <string>
#include <openssl/rand.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

class Encryption {
public:
    std::vector<uint8_t> generateRandomKey();
    std::string encryptWithKey(const std::string &data, const std::vector<uint8_t> &key);
    std::string decrypt(const std::string &data, const std::vector<uint8_t> &key);
    std::string hash(const std::string &data);
};

#endif // ENCRYPTION_H
