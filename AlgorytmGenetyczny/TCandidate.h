#pragma once
#include <vector>
#include "TParam.h"

class TCandidate
{
protected:

	int gens_count = 0;
	std::vector<TParam> genotype;

	double mark;

public:
	TCandidate();
	TCandidate(const TCandidate& original);

	virtual TCandidate* create() = 0;
	virtual TCandidate* create_copy() const = 0;

	double get_mark() const { return mark; };
	int get_gens_count() const { return gens_count; };

	virtual void rate() = 0;
	void info();
	double get_gen_val(int gen_id) const { return genotype[gen_id].get_val(); }
	void set_gen_val(int gen_id, double gen_value);
	double get_gen_dx(int gen_id) { return genotype[gen_id].get_dx(); }

protected:
	void rand_gens_val();
	virtual void init_vector() = 0;
	
};

