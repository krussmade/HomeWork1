#include "../beast.h"

// Ввод параметров зверя из файла.
void In(beast &someBeast, std::ifstream &ifst) {
    ifst >> someBeast.name >> someBeast.weight;
}

// Случайный ввод параметров зверя.
void InRnd(beast &someBeast) {
    someBeast.weight = Random(10000);
    RandomName(someBeast.name, NAME_SIZE);
    someBeast.diet = (beast::Diet)(Random(3));
}

// Вывод параметров зверя в форматируемый поток.
void Out(beast &someBeast, std::ofstream &ofst) {
    ofst << "It is Beast: name = " << someBeast.name <<
         ", weight = " << someBeast.weight <<
         ", diet (PREDATOR - 0, HERBIVOROUS - 1, INSECTIVORES - 2) = " << static_cast<int>(someBeast.diet);
}

double SomeParameter(beast &someBeast){
    int sum = 0;
    for (int i = 0; i < NAME_SIZE; ++i) {
        sum += (int)(someBeast.name[i]);
    }
    return sum / (double)someBeast.weight;
}

