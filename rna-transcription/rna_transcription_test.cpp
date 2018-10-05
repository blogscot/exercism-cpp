#include "rna_transcription.h"
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
#include <stdexcept>

BOOST_AUTO_TEST_CASE(transcribes_cytidine_to_guanosine) {
  BOOST_REQUIRE_EQUAL('G', transcription::to_rna('C'));
}

BOOST_AUTO_TEST_CASE(transcribes_guanosine_to_cytidine) {
  BOOST_REQUIRE_EQUAL('C', transcription::to_rna('G'));
}

BOOST_AUTO_TEST_CASE(transcribes_adenosine_to_uracil) {
  BOOST_REQUIRE_EQUAL('U', transcription::to_rna('A'));
}

BOOST_AUTO_TEST_CASE(transcribes_thymidine_to_adenosine) {
  BOOST_REQUIRE_EQUAL('A', transcription::to_rna('T'));
}

BOOST_AUTO_TEST_CASE(transcribes_invalid_nucleotide) {
  BOOST_REQUIRE_THROW(transcription::to_rna('Z'), std::invalid_argument);
}

BOOST_AUTO_TEST_CASE(transcribes_all_dna_nucleotides_to_their_rna_complements) {
  BOOST_REQUIRE_EQUAL("UGCACCAGAAUU", transcription::to_rna("ACGTGGTCTTAA"));
}

BOOST_AUTO_TEST_CASE(transcribes_nucleotides_containing_invalid_item) {
  BOOST_REQUIRE_THROW(transcription::to_rna("AXGTGGTCTTAA"),
                      std::invalid_argument);
}
#if defined(EXERCISM_RUN_ALL_TESTS)
#endif
