#include "ex03/CaesarCipher.hh"
#include<iostream>

int main(int argc, char** argv) {
  if (argc != 4) { std::cout << "This program expects exactly three arguments: command [e encode | d decode], shift and message!\n"; return 1; }

  auto message = argv[3];
  int shift;
  try {
    shift = std::stoi(argv[2]);
  } catch (std::invalid_argument& e) {
    std::cout << "Shift must be an integer!\n";
    return 1;
  }
  auto cipher = CaesarCipher(shift);

  switch (argv[1][0]) {
    case 'e': { std::cout << cipher.encrypt(message) << '\n'; break; }
    case 'd': { std::cout << cipher.decrypt(message) << '\n'; break; }
    default: { std::cout << "This program expects exactly three arguments: command [e encode | d decode], shift and message!\n"; return 1; }
  }

  return 0;
}
