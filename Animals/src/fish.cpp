
#include "../fish.h"

// Ввод параметров рыбы из файла.
void In(fish &someFish, std::ifstream &ifst) {
    int k;
    ifst >> someFish.name >> someFish.weight >> k;
    someFish.habitat = (fish::Habitat) k;
}

// Случайный ввод параметров рыбы.
void InRnd(fish &someFish) {
    someFish.weight = Random(1000);
    someFish.habitat = (fish::Habitat)(Random(5));
    RandomName(someFish.name, NAME_SIZE);
}

// Вывод параметров рыбы в форматируемый поток.
void Out(fish &someFish, std::ofstream &ofst) {
    ofst << "It is Fish: name = " << someFish.name << ", weight = " << someFish.weight <<
         ", habitat (SEA - 0, LAKE - 1, RIVER - 2, OCEAN - 3, POND - 4): " << static_cast<int>(someFish.habitat);
}

double SomeParameter(fish &someFish) {
    int sum = 0;
    for (int i = 0; i < NAME_SIZE; ++i) {
        sum += (int)(someFish.name[i]);
    }
    return sum / (double) someFish.weight;
}

