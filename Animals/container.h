#ifndef __container__
#define __container__
#include <fstream>
#include "animal.h"
//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
struct container {
    enum {
        max_len = 10000
    };
    int len; // текущая длина
    animal *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, std::ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, std::ofstream &ofst);

// ---
void Swap(animal *a, animal *b);

void HeapSort(container &c, int n);

#endif