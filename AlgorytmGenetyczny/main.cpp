#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

#include "TCandidate_1.h"
#include "TCandidate_2.h"
#include "TCandidate_3.h"
#include "TAlgorithm.h"

using namespace std;

int main()
{

	srand(time(0));

	TCandidate* pattern;
	unsigned int count = 0;
	int _type = -1;

	cout << "Ktory osobnik [1-3]: ";
	cin >> _type;
	cout << "Ilu osobnikow utworzyc ? ";
	cin >> count;

	switch (_type)
	{
	case 1:
		pattern = new TCandidate_1{};
		break;
	case 2:
		pattern = new TCandidate_2{};
		break;
	case 3:
		pattern = new TCandidate_3{};
		break;
	default:
		pattern = new TCandidate_1{};
		break;
	}

	//unsigned int candidates_count = 5;
	unsigned int max_population_count = 20;
	unsigned int min_improvement_proc = 2;

	TAlgorithm task{ pattern,
		count,
		max_population_count,
		min_improvement_proc };
	task.run();

	//TPopulation pop(count, pattern);
	//pop.calculate();
	//pop.info();
	//
	//cout << "Najlepszy kandydat populacji\n";
	//
	//TCandidate * best = pop.get_best_candidate();
	//best->info();
	//
	

	/*

	///////////////////////////////////////////////////////////

	//TCandidate_1 os_1;
	//os_1.rate();
	//os_1.info();

	//TCandidate_2 os_2;
	//os_2.rate();
	//os_2.info();

	//std::cout << "\n\n\n";

	///////////////////////////////////////////////////////////////////////

	//vector<TCandidate*> candidates;

	//candidates.push_back(new TCandidate{});
	//candidates.push_back(new TCandidate_1{});
	//candidates.push_back(new TCandidate_2{});

	//for (int i = 0; i < candidates.size(); i++)
	//{
	//	candidates[i]->rate();
	//	candidates[i]->info();
	//}

	//for (int i = 0; i < candidates.size(); i++)
	//{
	//	delete candidates[i];
	//}

	////////////////////////////////////////////////////////////////////

	//TCandidate* os = new TCandidate_1{};
	//os->rate();
	//os->info();
	//delete os;

	//os = new TCandidate_2{};
	//os->rate();
	//os->info();
	//delete os;

	/////////////////////////////////////////////////////////////////

	//TCandidate_2 os_org{};
	//os_org.rate();
	//os_org.info();

	//TCandidate_2 os_copy{ os_org };
	//os_copy.rate();
	//os_copy.info();

	///////////////////////////////////////////////////////////////////////

	//TCandidate os_org{};
	//os_org.rate();
	//os_org.info();

	//TCandidate_1 os_1{};
	//os_1.rate();
	//os_1.info();

	//////////////////////////////////////////////////////////////////////

	//TParam gen{ "gen1", 0, 10, 0.1 };
	//gen.info();

	//TParam gen_copy(gen);
	//gen_copy.info();

	///////////////////////////////////////////////////////////

	//cout << "\n\n\n";

	//TCandidate cand;
	//cand.info();

	//TCandidate cand_copy(cand);
	//cand_copy.info();

	//cout << "\n\n\n";

	//unsigned int candidates_count = 5;
	//unsigned int max_population_count = 20;
	//unsigned int min_improvement_proc = 2;

	//TAlgorithm task{ candidates_count, max_population_count, min_improvement_proc };

	//task.run();

	///////////////////////////////////////////////////////////

	//TPopulation pop(10);

	//cout << "Zaraz po utworzeniu obiektu klasy TPopulation\n";
	//pop.info();
	//cout << "\n\n";

	//cout << "Po wykonanych obliczeniach\n";
	//pop.calculate();
	//pop.info();
	//cout << "\n";

	//cout << "Najlepszy osobnik\n";
	//pop.get_best_candidate().info();

	///////////////////////////////////////////////////////////

	//srand(time(0));
	//TCandidate os1{};
	//os1.rate();
	//os1.info();
	//
	//TParam param1{ 1, 4, 1, 2 };
	//TParam param2{ 10, 20, 3 };
	//TParam param3{ 0, 10, 0.5, 3.3 };
	//
	//cout << "param1";
	//param1.info();
	//
	//cout << "param2";
	//param2.info();
	//
	//cout << "param3";
	//param3.info();

	//////////////////////////////////////////////

	//param2.set_val(100);
	//param3.set_val(7.5);
	//
	//cout << "=============\n";
	//cout << "AFTER\n";
	//cout << "=============\n";
	//
	//cout << "param2";
	//param2.info();
	//
	//cout << "param3";
	//param3.info();

	////////////////////////////////////////////////
	*/

	std::cout << "\n\n\n";
	return 0;
}