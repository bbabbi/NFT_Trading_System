#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <string>
#include <vector>

class Blockchain {
public:
    struct PublicParams {
        std::string ekRegi;
        std::string vkRegi;
        std::string ekGen;
        std::string vkGen;
    };

    PublicParams setup();
    std::string registerContent(const PublicParams &pp, const std::string &encryptedContent);
    std::string generateTrade(const PublicParams &pp, const std::string &fee, const std::string &writerPublicKey, const std::string &writerSecretKey, const std::string &buyerPublicKey, const std::string &buyerSecretKey);
    void acceptRequest(const PublicParams &pp, const std::string &txGen, const std::string &writerSecretKey);
};

#endif // BLOCKCHAIN_H
