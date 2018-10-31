#ifndef BINARY_H_
#define BINARY_H_

#include <string>

namespace binary {

int convert(std::string text) {
  int result{0};

  for (auto& letter : text) {
    if (!isdigit(letter)) return 0;

    result <<= 1;
    if (letter == '1') {
      result |= 1;
    }
  }
  return result;
}

}  // namespace binary

#endif  // BINARY_H_
