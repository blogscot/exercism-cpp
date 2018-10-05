#ifndef SCRABBLE_SCORE_H_
#define SCRABBLE_SCORE_H_

#include <algorithm>
#include <functional>
#include <map>
#include <numeric>
#include <string>

namespace scrabble_score {

using std::make_pair;
using std::string;
using std::transform;

static const std::map<string, uint8_t> scores{
    make_pair("AEIOULNRST", 1), make_pair("DG", 2), make_pair("BCMP", 3),
    make_pair("FHVWY", 4),      make_pair("K", 5),  make_pair("JX", 8),
    make_pair("QZ", 10)};

bool contains(const string& word, const char letter) {
  return word.find(letter) != string::npos;
}

uint8_t score(string word) {
  transform(word.begin(), word.end(), word.begin(), [](char letter) -> uint8_t {
    for (auto score : scores) {
      if (contains(score.first, toupper(letter))) {
        return score.second;
      }
    }
    return 0;
  });
  return std::accumulate(word.begin(), word.end(), 0, std::plus<int>());
}
}  // namespace scrabble_score

#endif  // SCRABBLE_SCORE_H_
