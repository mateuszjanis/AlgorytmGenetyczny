#include <iostream>
#include "TAlgorithm.h"

using namespace std;

int main()
{

	srand(time(0));

	unsigned int candidates_count = 5;
	unsigned int max_population_count = 20;
	unsigned int min_improvement_proc = 2;

	TAlgorithm task{ candidates_count, max_population_count, min_improvement_proc };

	task.run();

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

	return 0;
}