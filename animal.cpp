//
// Created by adami on 03.10.2021.
//

#include "animal.h"

animal* In(std::ifstream &ifst) {
    animal *someAnimal;
    int k;
    ifst >> k;
    switch(k) {
        case 0:
            someAnimal = new animal;
            someAnimal->k = animal::FISH;
            In(someAnimal->someFish, ifst);
            return someAnimal;
        case 1:
            someAnimal = new animal;
            someAnimal->k = animal::BIRD;
            In(someAnimal->someBird, ifst);
            return someAnimal;
        case 2:
            someAnimal = new animal;
            someAnimal->k = animal::BEAST;
            In(someAnimal->someBeast, ifst);
            return someAnimal;
        default:
            return 0;
    }
}

// Случайный ввод обобщенной фигуры
animal *InRnd() {
    animal *sp;
    auto k = rand() % 3;
    switch(k) {
        case 0:
            sp = new animal;
            sp->k = animal::FISH;
            InRnd(sp->someFish);
            return sp;
        case 1:
            sp = new animal;
            sp->k = animal::BIRD;
            InRnd(sp->someBird);
            return sp;
        case 3:
            sp = new animal;
            sp->k = animal::BEAST;
            InRnd(sp->someBeast);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(animal &s, std::ofstream &ofst) {
    switch(s.k) {
        case animal::FISH:
            Out(s.someFish, ofst);
            break;
        case animal::BIRD:
            Out(s.someBird, ofst);
            break;
        case animal::BEAST:
            Out(s.someBeast, ofst);
            break;
        default:
            ofst << "Incorrect animal!";
    }
}