#if !defined(GIGASECOND_H)
#define GIGASECOND_H
#include <boost/date_time.hpp>

namespace gigasecond
{

using namespace boost::posix_time;

ptime advance(ptime time)
{
  int gigasecond = 1e9;
  return time + seconds(gigasecond);
}

} // namespace gigasecond
#endif