#include "TPopulation.h"
#include <iostream>

using namespace std;

unsigned int TPopulation::_id = 0;

TPopulation::TPopulation(unsigned int count)
{
	_id++;
	candidates_count = count;
	
	for (int i = 0; i < count; i++){candidates.push_back({});}
}

void TPopulation::info()
{
	unsigned int id = 0;
	cout << "===== POPULATION #" << _id << " ====" << endl;
	for (int i = 0; i < candidates_count; i++)
	{
		cout << "== candidate#" << i << ": " << candidates[i].get_mark() << endl;
	}
	cout << "==========================\n";
}

void TPopulation::calculate()
{
	double best_val = 0.0;
	
	for (int i = 0; i < candidates_count; i++)
	{
		candidates[i].rate();
		double val = candidates[i].get_mark();

		if (i == 0) best_val = val;
		else best_val = max(best_val,val);
	}

	this->best_val = best_val;
}

TCandidate TPopulation::get_best_candidate()
{
	int i = 0;
	while(candidates[i].get_mark() != best_val) i++;

	return candidates[i];

}