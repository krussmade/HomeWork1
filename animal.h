//
// Created by adami on 03.10.2021.
//

#ifndef CPROGRAMS_ANIMAL_H
#define CPROGRAMS_ANIMAL_H


#include <fstream>
#include "rnd.h"
#include "beast.h"
#include "bird.h"
#include "fish.h"

struct animal {
    enum key {FISH, BIRD, BEAST};
    key k;
    union {
        fish someFish;
        bird someBird;
        beast someBeast;
    };
};

// Ввод обобщенной животного.
animal *In(std::ifstream &ifdt);

// Случайный ввод обобщенной животного.
animal *InRnd();

// Вывод обобщенной животного.
void Out(animal &someAnimal, std::ofstream &ofst);

double SomeParameter(animal &someAnimal);



#endif //CPROGRAMS_ANIMAL_H
