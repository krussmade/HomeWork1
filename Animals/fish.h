#ifndef __fish__
#define __fish__
#include <fstream>
#include <xstring>
#include "utils.h"
#include "constants.h"

struct fish {
    enum Habitat {
        SEA = 0,
        LAKE = 1,
        RIVER = 2,
        OCEAN = 3,
        POND = 4
    };

    char name[NAME_SIZE];
    int weight;
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
#endif