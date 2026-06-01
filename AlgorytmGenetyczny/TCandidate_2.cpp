#include "TCandidate_2.h"

using namespace std;

void TCandidate_2::set_gens_range()
{
	genotype[0].set_range(0, 10, 1);
	genotype[1].set_range(11, 20, 2);
}