#pragma once
#include "TCandidate.h"

class TCandidate_1 : public TCandidate
{
public:
	TCandidate_1() : TCandidate() 
	{
		init_vector();
	}
	
	TCandidate_1(const TCandidate_1& original) : TCandidate(original) {}

	TCandidate* create()
	{
		return new TCandidate_1();
	}

	TCandidate* create_copy() const
	{
		return new TCandidate_1{ *this };
	}

	void rate()
	{
		double x1 = genotype[0].get_val();
		double x2 = genotype[1].get_val();

		mark = 2 * (x1 + x2);
	}

protected:
	void init_vector();
};

void TCandidate_1::init_vector()
{
	genotype.push_back({ "x1",0,100,1 });
	genotype.push_back({ "x2",0,10,1 });

	gens_count = genotype.size();
}