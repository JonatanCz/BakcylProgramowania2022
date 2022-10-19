#include "ex01/convert.hh"
#include<iostream>

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cout << "This program expects exactly one argument!\n";
    return 1;
  }

  std::cout << convert(argv[1]) << '\n';
  return 0;
}