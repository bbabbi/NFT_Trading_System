#include <iostream>
#include "blockchain/blockchain.h"

int main() {
    Blockchain blockchain;
    auto pp = blockchain.setup();

    std::string content = "digital contents data";
    std::string encryptedContent = content; // 임시로 content를 암호화된 데이터로 사용

    std::string proofOfContent = blockchain.registerContent(pp, encryptedContent);
    std::cout << "Proof of Content: " << proofOfContent << std::endl;

    std::string fee = "100";
    std::string writerPublicKey = "writer_public_key";
    std::string writerSecretKey = "writer_secret_key";
    std::string buyerPublicKey = "buyer_public_key";
    std::string buyerSecretKey = "buyer_secret_key";

    std::string generatedTrade = blockchain.generateTrade(pp, fee, writerPublicKey, writerSecretKey, buyerPublicKey, buyerSecretKey);
    std::cout << "Generated Trade: " << generatedTrade << std::endl;

    blockchain.acceptRequest(pp, generatedTrade, writerSecretKey);

    return 0;
}
