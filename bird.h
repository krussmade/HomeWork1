//
// Created by adami on 02.10.2021.
//

#ifndef CPROGRAMS_BIRD_H
#define CPROGRAMS_BIRD_H

#include <fstream>
#include <xstring>
#include "rnd.h"

struct bird {
    std::string name;
    int weight;
    bool isMigratory;
};

// Ввод параметров птицы из файла.
void In(bird &someBird, std::ifstream &ifst);

// Случайный ввод параметров птицы.
void InRnd(bird &someBird);

// Вывод параметров птицы в форматируемый поток.
void Out(bird &someBird, std::ofstream &ofst);

// Частное от деления суммы кодов назашифрованной строки на вес.
double SomeParameter(bird &someBird);


#endif //CPROGRAMS_BIRD_H
