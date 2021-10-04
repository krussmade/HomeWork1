#ifndef __beast__
#define __beast__
#include <fstream>
#include <xstring>
#include "utils.h"
#include "constants.h"

struct beast {
    enum Diet{
        PREDATOR = 0,
        HERBIVOROUS = 1,
        INSECTIVORES = 2
    };
    char name[NAME_SIZE];
    Diet diet;
    int weight;
};

// Ввод параметров зверя из файла.
void In(beast &someBeast, std::ifstream &ifst);

// Случайный ввод параметров зверя.
void InRnd(beast &someBeast);

// Вывод параметров зверя в форматируемый поток.
void Out(beast &someBeast, std::ofstream &ofst);

// Частное от деления суммы кодов назашифрованной строки на вес.
double SomeParameter(beast &someBeast);
#endif