#include "TCandidate.h"
#include <iostream>
#include <math.h>

using namespace std;

TCandidate::TCandidate()
{
	mark = 0;
	rand_gens_val();
}

TCandidate::TCandidate(const TCandidate& original)
{
	for (int i = 0; i < GENS_COUNT; i++)
	{
		double x_start = original.genotype[i].get_x_start();
		double x_end = original.genotype[i].get_x_end();
		double dx = original.genotype[i].get_dx();
		double val = original.genotype[i].get_val();

		//std::string name = original.genotype[i].get_name();

		genotype[i].set_range(x_start, x_end, dx);
		//this->genotype[i].set_name(name);
		genotype[i].set_val(val);

	}

	mark = original.get_mark();
}

void TCandidate::rate()
{
	double x1 = genotype[0].get_val();
	double x2 = genotype[1].get_val();

	mark = pow(x1, 2) + x2;
}

void TCandidate::info()
{

	cout << "========================" << endl;
	cout << "== gens count: " << GENS_COUNT << endl;

	for (int i = 0; i < GENS_COUNT; i++)
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
	for (int i = 0; i < GENS_COUNT; i++)
	{
		genotype[i].set_rand_val();
	}
}

TParam TCandidate::get_genotype(int gen_id)
{
	return genotype[gen_id];
}