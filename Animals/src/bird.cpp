#include "../bird.h"

// Ввод параметров птицы из файла.
void In(bird &someBird, std::ifstream &ifst){
    ifst >> someBird.name >> someBird.weight >> someBird.isMigratory;
}

// Случайный ввод параметров птицы.
void InRnd(bird &someBird){
    someBird.weight = Random(1000);
    RandomName(someBird.name, NAME_SIZE);
}

// Вывод параметров птицы в форматируемый поток.
void Out(bird &someBird, std::ofstream &ofst) {
    ofst << "It is Bird: name = " << someBird.name <<
         ", weight = " << someBird.weight <<
         ". Is this bird migrator (no - 0, yes - 1):" << someBird.isMigratory;
}

double SomeParameter(bird &someBird){
    int sum = 0;
    for (int i = 0; i < NAME_SIZE; ++i) {
        sum += (int)(someBird.name[i]);
    }
    return sum / (double)someBird.weight;
}