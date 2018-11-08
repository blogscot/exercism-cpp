#ifndef GRAINS_H_
#define GRAINS_H_

#include <cmath>
#include <cstdint>

namespace grains {

const int NUM_SQUARES = 64;

auto square = [](uint32_t value) -> float { return std::pow(2, value - 1); };
auto total = []() -> float { return std::pow(2, NUM_SQUARES) - 1; };

}  // namespace grains

#endif  // GRAINS_H_
