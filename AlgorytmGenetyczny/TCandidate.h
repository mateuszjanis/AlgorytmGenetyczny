#pragma once
#include "TParam.h"

#define GENS_COUNT 2

class TCandidate
{
	TParam genotype[GENS_COUNT] =
	{
		TParam{ "x1", 0, 100, 1 },
		TParam{ "x2", 0, 10, 1 }
	};

	double mark;

public:
	TCandidate();
	TCandidate(const TCandidate& original);

	double get_mark() const { return mark; };

	void rate();
	void info();
	TParam get_genotype(int gen_id);

private:
	void rand_gens_val();
};

