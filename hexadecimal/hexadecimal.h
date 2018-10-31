#ifndef HEXADECIMAL_H_
#define HEXADECIMAL_H_

#include <string>

namespace hexadecimal {

int convert(std::string text) {
  auto result{0};

  for (auto& chr : text) {
    result *= 16;

    if (isdigit(chr)) {
      result += chr - '0';
    } else if (chr >= 'a' && chr <= 'f') {
      result += chr - 'a' + 10;
    } else {
      return 0;
    }
  }
  return result;
}

}  // namespace hexadecimal

#endif  // HEXADECIMAL_H_
