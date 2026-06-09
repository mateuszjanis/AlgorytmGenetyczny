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
	TPopulation(const TPopulation &original);

	void info();
	void calculate();
	TCandidate* get_best_candidate();
	double get_best_val() const { return best_val; };
	unsigned int get_id() { return _id; };
	unsigned int get_candidates_count() const { return candidates_count; };
	TCandidate* promote_candidate();

private:
	TCandidate* get_candidate_wsk(int _id) const;
};
