#include "utils.h"

int Random(int to) {
    return std::rand() % to;
}

void RandomName(char *content, int size) {
    content[0] = toupper(char('a' + std::rand() % 26));
    for (int i = 1; i < size; ++i) {
        content[i] = char('a' + std::rand() % 26);
    }
    content[size] = '\0';
}

