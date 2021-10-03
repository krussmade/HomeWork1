//
// Created by adami on 02.10.2021.
//

#ifndef CPROGRAMS_BEAST_H
#define CPROGRAMS_BEAST_H

#include <fstream>
#include <xstring>
#include "rnd.h"

struct beast {
    std::string name;
    int weight;
    enum Diet{
        PREDATOR,
        HERBIVOROUS,
        INSECTIVORES
    };
    Diet diet;
};


// Ввод параметров зверя из файла.
void In(beast &someBeast, std::ifstream &ifst);

// Случайный ввод параметров зверя.
void InRnd(beast &someBeast);

// Вывод параметров зверя в форматируемый поток.
void Out(beast &someBeast, std::ofstream &ofst);

// Частное от деления суммы кодов назашифрованной строки на вес.
double SomeParameter(beast &someBeast);

#endif //CPROGRAMS_BEAST_H
