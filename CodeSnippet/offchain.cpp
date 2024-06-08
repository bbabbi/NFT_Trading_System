#include <iostream>
#include <string>
#include <vector>

std::string encrypt(std::string data, std::string key) {
    return "encrypted_" + data;
}

std::string decrypt(std::string encrypted_data, std::string key) {
    return "decrypted_" + encrypted_data;
}

std::string generateProof(std::string data) {
    return "proof_" + data;
}

bool verifyProof(std::string proof, std::string data) {
    return proof == "proof_" + data;
}

class DigitalContentSystem {
public:
    DigitalContentSystem() {}

    void registerContent(std::string content, std::string key) {
        std::string encrypted_content = encrypt(content, key);
        std::string proof = generateProof(content);
        contents.push_back(encrypted_content);
        proofs.push_back(proof);
        std::cout << "Content registered: " << encrypted_content << std::endl;
    }

    void generateTrade(std::string buyer_key) {
        if (contents.empty()) {
            std::cout << "No content registered." << std::endl;
            return;
        }
        std::string last_content = contents.back();
        std::string decrypted_content = decrypt(last_content, buyer_key);
        std::string proof = generateProof(decrypted_content);
        if (verifyProof(proofs.back(), decrypted_content)) {
            std::cout << "Trade generated: " << decrypted_content << std::endl;
        } else {
            std::cout << "Invalid proof for trade." << std::endl;
        }
    }

private:
    std::vector<std::string> contents;
    std::vector<std::string> proofs;
};

int main() {
    DigitalContentSystem system;
    system.registerContent("ExampleContent", "SecretKey");
    system.generateTrade("SecretKey");
    return 0;
}
