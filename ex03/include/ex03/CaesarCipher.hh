//
// Created by lolicon on 19.10.22.
//

#ifndef BAKCYLPROGRAMOWANIA2022_CAESARCIPHER_HH
#define BAKCYLPROGRAMOWANIA2022_CAESARCIPHER_HH


#include <string>

class CaesarCipher {
public:
    CaesarCipher(const int shift);
    std::string encrypt(const std::string& message);
    std::string decrypt(const std::string& encryptedMessage);
private:
    int shift;

    char shiftChar(const unsigned char c, int shift) const;
};


#endif //BAKCYLPROGRAMOWANIA2022_CAESARCIPHER_HH
