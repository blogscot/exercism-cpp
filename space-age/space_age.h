#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <cstdint>

namespace space_age
{
class space_age
{
private:
  uint64_t duration;
  const double EARTH_YEAR = 365.25 * 24 * 60 * 60;
  const double MERCURY_YEAR = EARTH_YEAR * 0.2408467;
  const double VENUS_YEAR = EARTH_YEAR * 0.61519726;
  const double MARS_YEAR = EARTH_YEAR * 1.8808158;
  const double JUPITER_YEAR = EARTH_YEAR * 11.862615;
  const double SATURN_YEAR = EARTH_YEAR * 29.447498;
  const double URANUS_YEAR = EARTH_YEAR * 84.016846;
  const double NEPTUNE_YEAR = EARTH_YEAR * 164.79132;

public:
  space_age(uint64_t seconds)
  {
    duration = seconds;
  }
  int seconds() const
  {
    return duration;
  }
  double on_earth() const
  {
    return duration / EARTH_YEAR;
  }
  double on_mercury() const
  {
    return duration / MERCURY_YEAR;
  }
  double on_venus() const
  {
    return duration / VENUS_YEAR;
  }
  double on_mars() const
  {
    return duration / MARS_YEAR;
  }
  double on_jupiter() const
  {
    return duration / JUPITER_YEAR;
  }
  double on_saturn() const
  {
    return duration / SATURN_YEAR;
  }
  double on_uranus() const
  {
    return duration / URANUS_YEAR;
  }
  double on_neptune() const
  {
    return duration / NEPTUNE_YEAR;
  }
};
} // namespace space_age
#endif