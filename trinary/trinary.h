#ifndef TRINARY_H_
#define TRINARY_H_

#include <string>

namespace trinary {

int to_decimal(std::string text) {
  auto result{0};

  for (auto& chr : text) {
    result *= 3;
    switch (chr) {
      case '2':
      case '1':
      case '0':
        result += chr - '0';
        break;
      default:
        return 0;
    }
  }
  return result;
}

}  // namespace trinary

#endif  // TRINARY_H_
