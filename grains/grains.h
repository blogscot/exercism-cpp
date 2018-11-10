#ifndef GRAINS_H_
#define GRAINS_H_

#include <cassert>
#include <cmath>
#include <cstdint>

namespace grains {

const int NUM_SQUARES = 64;

auto square = [](uint8_t value) -> uint64_t {
  assert(value >= 1 && value <= 64);
  return static_cast<u_int64_t>(std::pow(2, value - 1));
};
auto total = []() -> uint64_t {
  return static_cast<u_int64_t>(std::pow(2, NUM_SQUARES)) - 1;
};

}  // namespace grains

#endif  // GRAINS_H_
