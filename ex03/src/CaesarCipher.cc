#include "ex03/CaesarCipher.hh"

CaesarCipher::CaesarCipher(const int shift) : shift(shift) {}

std::string CaesarCipher::encrypt(const std::string &message) {
  std::string r;
  for (auto& i : message) r += CaesarCipher::shiftChar(i, shift);
  return r;
}

std::string CaesarCipher::decrypt(const std::string &encryptedMessage) {
  std::string r;
  for (auto& i : encryptedMessage) r += CaesarCipher::shiftChar(i, -shift);
  return r;
}

char CaesarCipher::shiftChar(const unsigned char c, int shift) const {
  char n;
  if (c >= 'A' && c <= 'Z') {
    return (26 + ((c - 'A' + (shift % 26)) % 26)) % 26 + 'A';
  }
  if (c >= 'a' && c <= 'z') {
    return (26 + ((c - 'a' + (shift % 26)) % 26)) % 26 + 'a';
  }
  return c;
}

