//
// Created by adami on 02.10.2021.
//

#include "fish.h"

// Ввод параметров рыбы из файла.
void In(fish &someFish, std::ifstream &ifst){
    int k;
    ifst >> someFish.name >> someFish.weight >> k;
    someFish.habitat = (fish::Habitat)k;
}

// Случайный ввод параметров рыбы.
void InRnd(fish &someFish){
    someFish.weight = std::rand() % 1000;
    someFish.name = RandomName();
}

// Вывод параметров рыбы в форматируемый поток.
void Out(fish &someFish, std::ofstream &ofst) {
    int k;
    ofst << "It is Fish: name = " << someFish.name << ", weight = " << someFish.weight <<
    ", habitat (SEA - 0, LAKE - 1, RIVER - 2, OCEAN - 3, POND - 4): " << k;
    someFish.habitat = (fish::Habitat)k;
}

double SomeParameter(fish &someFish){
    int sum;
    for (int i = 0; i < someFish.name.length(); ++i) {
        sum += (int)someFish.name[i];
    }
    return sum / (double)someFish.weight;
}

