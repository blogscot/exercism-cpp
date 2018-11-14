#ifndef GRAINS_H_
#define GRAINS_H_

#include <cstdint>

namespace grains {

const int NUM_SQUARES = 64;

auto square(uint8_t value) -> uint64_t { return 1ULL << (value - 1); }

auto total() -> uint64_t {
  uint64_t sum{0};
  for (int i = 1; i <= NUM_SQUARES; ++i) {
    sum += square(i);
  }
  return sum;
}

}  // namespace grains

#endif  // GRAINS_H_
