#ifndef RNA_TRANSCRIPTION_H_
#define RNA_TRANSCRIPTION_H_

#include <algorithm>
#include <map>
#include <string>

namespace transcription {

using std::invalid_argument;
using std::make_pair;
using std::map;
using std::string;
using std::to_string;
using std::transform;

static const map<char, char> transcription{
    make_pair('G', 'C'), make_pair('C', 'G'), make_pair('T', 'A'),
    make_pair('A', 'U')};

char to_rna(char nucleotide) {
  auto transcribed = transcription.find(nucleotide);
  if (transcribed != transcription.end()) {
    return transcribed->second;
  }
  throw invalid_argument("Invalid argument: " + to_string(nucleotide));
}

string to_rna(string strand) {
  transform(strand.begin(), strand.end(), strand.begin(),
            [](char nucleotide) { return to_rna(nucleotide); });
  return strand;
}

}  // namespace transcription

#endif  // RNA_TRANSCRIPTION_H_
