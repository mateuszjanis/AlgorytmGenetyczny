#include "TPopulation.h"
#include <iostream>

using namespace std;

unsigned int TPopulation::population_count = 0;

TPopulation::TPopulation(unsigned int count, TCandidate* pattern)
{
	_id = population_count;
	population_count++;

	candidates_count = count;
	
	for (int i = 0; i < count; i++){candidates.push_back(pattern->create());}
}

TPopulation::TPopulation(const TPopulation& original)
{
	_id = population_count;
	population_count++;

	candidates_count = original.get_candidates_count();
	best_val = original.get_best_val();

	for (int i = 0; i < candidates_count; i++)
	{
		const TCandidate* wsk_os_org = original.get_candidate_wsk(i);
		TCandidate* copy = wsk_os_org->create_copy();
		candidates.push_back(copy);
	}

	cout << "liczba osobników: " << candidates.size() << endl;

}

void TPopulation::info()
{
	unsigned int id = 0;
	cout << "===== POPULATION #" << _id << " ====" << endl;
	for (int i = 0; i < candidates_count; i++)
	{
		cout << "== candidate#" << i << ": " << candidates[i]->get_mark() << endl;
	}
	cout << "==========================\n";
}

void TPopulation::calculate()
{
	double best_val = 0.0;
	
	for (int i = 0; i < candidates_count; i++)
	{
		candidates[i]->rate();
		double val = candidates[i]->get_mark();

		if (i == 0) best_val = val;
		else best_val = max(best_val,val);
	}

	this->best_val = best_val;
}

TCandidate* TPopulation::get_best_candidate()
{
	int i = 0;
	while(candidates[i]->get_mark() != best_val) i++;

	return candidates[i];

}

const TCandidate* TPopulation::get_candidate_wsk(int _id) const
{
	return candidates[_id];
}