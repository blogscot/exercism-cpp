#ifndef DIFFERENCE_OF_SQUARES_H_
#define DIFFERENCE_OF_SQUARES_H_

namespace squares {

unsigned int square_of_sums(unsigned int value) {
  int total{0};
  for (int x = 1; x <= value; x++) {
    total += x;
  }
  return total * total;
}

unsigned int sum_of_squares(unsigned int value) {
  int total{0};
  for (int x = 1; x <= value; x++) {
    total += x * x;
  }
  return total;
}

unsigned int difference(unsigned int value) {
  return square_of_sums(value) - sum_of_squares(value);
}
}  // namespace squares
#endif  // DIFFERENCE_OF_SQUARES_H_
