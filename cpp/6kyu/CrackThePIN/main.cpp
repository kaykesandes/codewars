#include <string>
#include <iostream>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>

std::string md5(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.length());
    MD5_Final(digest, &ctx);

    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];

    return ss.str();
}

std::string crack(const std::string& hash) {

    for (int i = 0; i < 100000; ++i) {
        std::string pin = std::to_string(i);

        while (pin.length() < 5)
            pin = "0" + pin;
        
        
        std::string pinHash = md5(pin);
        
        
        if (pinHash == hash)
            return pin; 
    }
    

    return "PIN not found!";
}

int main() {
    std::string hash = "482c811da5d5b4bc6d497ffa98491e38";
    std::string crackedPIN = crack(hash);
    std::cout << "Cracked PIN: " << crackedPIN << std::endl;
    return 0;
}
