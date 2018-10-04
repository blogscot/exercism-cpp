#ifndef HAMMING_H_
#define HAMMING_H_

#include <stdexcept>
#include <string>

namespace hamming {

using std::domain_error;
using std::string;

size_t compute(const string &left, const string &right) {
  auto left_len = left.length();
  auto right_len = right.length();

  if (left_len != right_len) {
    throw domain_error("Strand lengths do not match!");
  }

  auto distance{0};
  for (int i = 0; i < left_len; i++) {
    if (left[i] != right[i]) {
      distance++;
    }
  }
  return distance;
}
}  // namespace hamming

#endif  // HAMMING_H_
