#pragma once
#include "TCandidate.h"

class TCandidate_2 : public TCandidate
{
public:
	TCandidate_2() : TCandidate() 
	{
	
		set_gens_range();
		rand_gens_val();
	
	}
	TCandidate_2(const TCandidate_2& original) : TCandidate(original) {}

private:
	void set_gens_range();
};


