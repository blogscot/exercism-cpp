#ifndef SUM_OF_MULTIPLES_H_
#define SUM_OF_MULTIPLES_H_

#include <functional>
#include <numeric>
#include <vector>
#include "boost/range/irange.hpp"

namespace sum_of_multiples {

using boost::integer_range;
using std::back_inserter;
using std::copy_if;
using std::endl;
using std::vector;

vector<int> filter(const integer_range<int>& range, vector<int> values) {
  vector<int> output = {};
  copy_if(range.begin(), range.end(), back_inserter(output), [values](int i) {
    for (const auto value : values) {
      if (i % value == 0) {
        return true;
      }
    }
    return false;
  });
  return output;
}

int sum(const vector<int>& numbers) {
  return std::accumulate(numbers.begin(), numbers.end(), 0, std::plus<int>());
}

int to(vector<int> numbers, int max) {
  auto range = boost::irange(0, max);
  return sum(filter(range, numbers));
}

}  // namespace sum_of_multiples

#endif  // SUM_OF_MULTIPLES_H_
