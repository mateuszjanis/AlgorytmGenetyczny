#pragma once
#include "TCandidate.h"
#include <vector>

class TPopulation
{
	static unsigned int _id;
	unsigned int candidates_count;
	std::vector<TCandidate> candidates;
	double best_val = 0;

public:
	TPopulation(unsigned int count);

	void info();
	void calculate();
	TCandidate get_best_candidate();
	double get_best_val() { return best_val; };
	static unsigned int get_id() { return _id; };
	unsigned int get_candidates_count() { return candidates_count; };

private:

};

