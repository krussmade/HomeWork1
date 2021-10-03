//
// Created by adami on 03.10.2021.
//

#ifndef CPROGRAMS_CONTAINER_H
#define CPROGRAMS_CONTAINER_H

#include "animal.h"

struct container {
    enum {max_len = 10000}; // максимальная длина
    int len; // текущая длина
    animal *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst);


#endif //CPROGRAMS_CONTAINER_H
