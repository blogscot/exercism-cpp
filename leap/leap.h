#ifndef LEAP_H_
#define LEAP_H_

namespace leap {

inline bool is_leap_year(unsigned int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

}  // namespace leap

#endif  // LEAP_H_
