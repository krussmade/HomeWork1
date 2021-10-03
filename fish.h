//
// Created by adami on 02.10.2021.
//

#ifndef CPROGRAMS_FISH_H
#define CPROGRAMS_FISH_H


#include <fstream>
#include "rnd.h"

struct fish {
    std::string name;
    int weight;
    enum Habitat {
        SEA,
        LAKE,
        RIVER,
        OCEAN,
        POND
    };
    Habitat habitat;
};

// Ввод параметров рыбы из файла.
void In(fish &someFish, std::ifstream &ifst);

// Случайный ввод параметров рыбы.
void InRnd(fish &someFish);

// Вывод параметров рыбы в форматируемый поток.
void Out(fish &someFish, std::ofstream &ofst);

// Частное от деления суммы кодов назашифрованной строки на вес.
double SomeParameter(fish &someFish);


#endif //CPROGRAMS_FISH_H