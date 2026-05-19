#pragma once
#include "TCandidate.h"
#include <vector>

class TPopulation
{
	//unsigned int id;
	unsigned int candidates_count;
	std::vector<TCandidate> candidates;
	double best_val;

public:
	TPopulation(unsigned int count);

	void info();
	void calculate();
	//TCandidate get_best_candidate();

private:

};

