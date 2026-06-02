#pragma once
#include "TCandidate.h"

class TCandidate_3 : public TCandidate
{
public:
	TCandidate_3() : TCandidate()
	{
		init_vector();
	}

	TCandidate_3(const TCandidate_3& original) : TCandidate(original) {}

	TCandidate* create()
	{
		return new TCandidate_3();
	}

	TCandidate* create_copy() const
	{
		return new TCandidate_3{ *this };
	}

	void rate()
	{
		double x1 = genotype[0].get_val();
		double x2 = genotype[1].get_val();
		double x3 = genotype[2].get_val();


		mark = 100 * x1 + 10 * x2 + x3;
	}

protected:
	void init_vector();
};

void TCandidate_3::init_vector()
{
	genotype.push_back({ "x1", 0, 10, 1 });
	genotype.push_back({ "x2", 0, 10, 1 });
	genotype.push_back({ "x3", 0, 10, 1 });

	gens_count = genotype.size();
}



