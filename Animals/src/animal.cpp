#include "../animal.h"

animal *In(std::ifstream &ifst) {
    animal *a;
    int k;
    ifst >> k;
    switch (k) {
        case 0:
            a = new animal;
            a->k = animal::FISH;
            In(a->someFish, ifst);
            return a;
        case 1:
            a = new animal;
            a->k = animal::BIRD;
            In(a->someBird, ifst);
            return a;
        case 2:
            a = new animal;
            a->k = animal::BEAST;
            In(a->someBeast, ifst);
            return a;
        default:
            return nullptr;
    }
}

// Случайный ввод обобщенной фигуры
animal *InRnd() {
    animal *sp;
    auto k = rand() % 3;
    switch (k) {
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
        case 2:
            sp = new animal;
            sp->k = animal::BEAST;
            InRnd(sp->someBeast);
            return sp;
        default:
            return nullptr;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(animal &s, std::ofstream &ofst) {
    switch (s.k) {
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
    ofst << "\n";
}

double SomeParameter(animal &someAnimal) {
    switch (someAnimal.k) {
        case animal::FISH:
            return SomeParameter(someAnimal.someFish);
        case animal::BIRD:
            return SomeParameter(someAnimal.someBird);
        case animal::BEAST:
            return SomeParameter(someAnimal.someBeast);
        default:
            return -1;
    }
}
