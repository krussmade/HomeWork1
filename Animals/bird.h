#ifndef __bird__
#define __bird__
#include <fstream>
#include <xstring>
#include "utils.h"
#include "constants.h"

struct bird {
    char name[NAME_SIZE];
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
#endif
