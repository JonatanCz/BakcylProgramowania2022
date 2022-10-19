#include <stdexcept>
#include "ex01/convert.hh"

std::uint32_t convert(std::string input) {
  if (input.size() > 32) throw std::runtime_error{"Input contains too many characters! Maximum allowed: 32"};

  std::uint32_t r = 0;
  for(int i = 0 ; i < input.size() ; i++) {
    if (input[i] != '0' && input[i] != '1') throw std::runtime_error{"Input contains illegal characters!"};
    r |= (input[i] == '0' ? 0 : 1) << (input.size() - i - 1);
  }
  return r;
}