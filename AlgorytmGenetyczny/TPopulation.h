#pragma once
#include "TCandidate.h"
#include <vector>


class TPopulation
{
	static unsigned int			population_count;
	unsigned int				_id;
	unsigned int				candidates_count;
	std::vector<TCandidate*>	candidates;
	double						best_val = 0;

public:
	TPopulation(unsigned int count, TCandidate* pattern);

	void info();
	void calculate();
	TCandidate* get_best_candidate();
	double get_best_val() { return best_val; };
	unsigned int get_id() { return this->_id; };
	unsigned int get_candidates_count() { return candidates_count; };

private:
};
