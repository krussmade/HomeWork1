//
// Created by adami on 02.10.2021.
//

#ifndef CPROGRAMS_RND_H
#define CPROGRAMS_RND_H

const char alf[] = "abcdefghijklmnopqrstuvwxyz";

inline auto RandomName() {
    std::string result;
    result += toupper(alf[std::rand()%26]);
    for (int i = 0; i < 5; ++i) {
        result += alf[std::rand()%26];
    }
    return result;
}


#endif //CPROGRAMS_RND_H
