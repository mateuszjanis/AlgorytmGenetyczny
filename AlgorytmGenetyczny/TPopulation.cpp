#include "TPopulation.h"
#include <iostream>

using namespace std;

TPopulation::TPopulation(unsigned int count)
{
	this->candidates_count = count;
	best_val = 1000;
	
	for (int i = 0; i < candidates_count; i++)
	{
		TCandidate x;
		candidates[i] = x;
	}
}

void TPopulation::info()
{
	unsigned int id = 0;
	cout << "===== POPULATION #" << id << " ====" << endl;
	for (int i = 0; i < candidates_count; i++)
	{
		cout << "== candidate#" << i << ": " << candidates[i].get_mark() << endl;
	}
	cout << "==========================\n";
}

void TPopulation::calculate()
{
	for (int i = 0; i < candidates_count; i++)
	{
		candidates[i].rate();
	}
}

//TCandidate TPopulation::get_best_candidate()
//{
//
//}