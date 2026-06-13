#pragma once
#include "TPopulation.h"

#define mutation_chance 

class TAlgorithm
{
    unsigned int stop_max_population_count;
    unsigned int stop_min_improvement_proc;

    TCandidate* pattern = nullptr;
    TPopulation* wsk_population_pres = nullptr;
    TPopulation* wsk_population_prev = nullptr;
public:
    TAlgorithm(TCandidate* pattern,
        unsigned int candidates_count,
        unsigned int max_population_count,
        unsigned int min_improvement_proc);

    ~TAlgorithm();

    void run();

private:
    bool is_stop();
    bool is_max_population();
    bool is_min_improvement();
};
