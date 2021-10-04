
#include "container.h"

void Init(container &c) {
    c.len = 0;
}

void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

void In(container &c, std::ifstream &ifst) {
    while (!ifst.eof()) {
        if ((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

void InRnd(container &c, int size) {
    while (c.len < size) {
        c.cont[c.len] = InRnd();
        if (c.cont[c.len] != nullptr) {
            c.len++;
        }
    }
}

void Out(container &c, std::ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements.\n";
    for (int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

void Swap(animal *a, animal *b) {
    animal t = *a;
    *a = *b;
    *b = t;
}

void heapify(container &c, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && SomeParameter(*c.cont[l]) > SomeParameter(*c.cont[largest]))largest = l;
    if (r < n && SomeParameter(*c.cont[r]) > SomeParameter(*c.cont[largest]))largest = r;

    if (largest != i) {
        Swap(c.cont[i], c.cont[largest]);
        heapify(c, n, largest);
    }
}

void HeapSort(container &c, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(c, n, i);

    for (int i = n - 1; i >= 0; i--) {
        Swap(c.cont[0], c.cont[i]);
        heapify(c, i, 0);
    }
}