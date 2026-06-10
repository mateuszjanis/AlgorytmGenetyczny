#include "TCandidate.h"
#include <iostream>
#include <math.h>

using namespace std;

TCandidate::TCandidate()
{
	gens_count = genotype.size();

	mark = 0;
	rand_gens_val();
}

TCandidate::TCandidate(const TCandidate& original)
{
	mark = original.get_mark();

	for (int i = 0; i < gens_count; i++)
	{
		double x_start = original.genotype[i].get_x_start();
		double x_end = original.genotype[i].get_x_end();
		double dx = original.genotype[i].get_dx();
		double val = original.genotype[i].get_val();

		genotype[i].set_range(x_start, x_end, dx);
		genotype[i].set_val(val);

	}

	gens_count = genotype.size();
}

void TCandidate::info()
{

	cout << "========================" << endl;
	cout << "== gens count: " << gens_count << endl;

	for (int i = 0; i < gens_count; i++)
	{
		cout << "== \"" << genotype[i].get_name() << "\" value: " << genotype[i].get_val() << endl;
	}

	cout << "== " << endl;
	cout << "== rate: " << mark << endl;
	cout << "== " << endl;
	cout << "========================" << endl;
	
}

void TCandidate::rand_gens_val()
{
	for (int i = 0; i < gens_count; i++)
	{
		genotype[i].set_rand_val();
	}
}

void TCandidate::set_gen_val(int gen_id, double gen_value)
{
	genotype[gen_id].set_val(gen_value);
}