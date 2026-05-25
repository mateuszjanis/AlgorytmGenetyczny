#include <iostream>
#include <math.h>

#include "TAlgorithm.h"

using namespace std;


TAlgorithm::TAlgorithm(unsigned int candidates_count,
        unsigned int max_population_count,
        unsigned int min_improvement_proc)
{
    stop_max_population_count = max_population_count;
    stop_min_improvement_proc = min_improvement_proc;

    wsk_population_pres = new TPopulation{ candidates_count };
}

TAlgorithm::~TAlgorithm()
{
    delete wsk_population_pres;
    delete wsk_population_prev;

    cout << "Usunieto obiekt klasy TAlgorithm";
}

void TAlgorithm::run()
{
    bool stop = false;

    while (!wsk_population_prev || !stop)
    {
        wsk_population_pres->calculate();

    }
}

bool is_stop()
{

}

bool is_max_population()
{

}

bool is_min_improvement()
{
    
}