#ifndef SMART_CONTRACT_H
#define SMART_CONTRACT_H

#include <string>

class SmartContract {
public:
    void storeData(const std::string &data);
    std::string createTradeRequest(const std::string &buyerPublicKey, const std::string &encryptedContent, const std::string &proof);
    void executeTrade(const std::string &tradeRequest);
};

#endif // SMART_CONTRACT_H
