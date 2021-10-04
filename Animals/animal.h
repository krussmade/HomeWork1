#ifndef __animal__
#define __animal__
#include "beast.h"
#include "bird.h"
#include "fish.h"
struct animal {
    enum key {FISH = 0,BIRD = 1,BEAST = 2};
    union {
        fish someFish;
        bird someBird;
        beast someBeast;
    };
    key k;
};

// Ввод обобщенной животного.
animal *In(std::ifstream &ifdt);

// Случайный ввод обобщенной животного.
animal *InRnd();

// Вывод обобщенной животного.
void Out(animal &someAnimal, std::ofstream &ofst);

double SomeParameter(animal &someAnimal);
#endif