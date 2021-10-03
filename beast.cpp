//
// Created by adami on 02.10.2021.
//

#include "beast.h"

// Ввод параметров зверя из файла.
void In(beast &someBeast, std::ifstream &ifst) {
    ifst >> someBeast.name >> someBeast.weight;
}

// Случайный ввод параметров зверя.
void InRnd(beast &someBeast) {
    someBeast.weight = std::rand() % 10000;
    someBeast.name = RandomName();
    someBeast.diet = (beast::Diet)(std::rand() % 3);
}

// Вывод параметров зверя в форматируемый поток.
void Out(beast &someBeast, std::ofstream &ofst) {
    int k;
    ofst << "It is Bird: name = " << someBeast.name <<
         ", weight = " << someBeast.weight <<
         "\n, diet (PREDATOR - 0, HERBIVOROUS - 1, INSECTIVORES - 2) = " << k;
    someBeast.diet = (beast::Diet)(k % 3);
}

double SomeParameter(beast &someBeast){
    int sum;
    for (int i = 0; i < someBeast.name.length(); ++i) {
        sum += (int)someBeast.name[i];
    }
    return sum / (double)someBeast.weight;
}