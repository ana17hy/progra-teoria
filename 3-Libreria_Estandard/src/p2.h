//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H

#include <algorithm>
#include <forward_list>
#include <vector>

template<typename Container>
Container sum_range(const Container& contenedor1, const Container& contenedor2) {
    auto i1 = contenedor1.begin();
    auto i2 = contenedor2.begin();
    int size = std::max(contenedor1.size(), contenedor2.size());
    Container resultado{};
    for (int i = 0; i < size; i++) {
        if (i1 == contenedor1.end()) i1 = contenedor1.begin();
        if (i2 == contenedor2.end()) i2 = contenedor2.begin();
        resultado.push_back(*i1 + *i2);
        ++i1;
        ++i2;
    }
    return resultado;
}

template<typename T>
std::forward_list<T> sum_range(const std::forward_list<T>& contenedor1, const std::forward_list<T>& contenedor2) {
    auto i1 = contenedor1.begin();
    auto i2 = contenedor2.begin();
    int size = std::max(std::distance(contenedor1.begin(), contenedor1.end()), std::distance(contenedor2.begin(), contenedor2.end()));
    std::forward_list<T> resultado{};
    std::vector<T> aux{};
    for (int i = 0; i < size; i++) {
        if (i1 == contenedor1.end()) i1 = contenedor1.begin();
        if (i2 == contenedor2.end()) i2 = contenedor2.begin();
        aux.push_back(*i1 + *i2);
        ++i1;
        ++i2;
    }
    for (auto it = aux.rbegin(); it != aux.rend(); ++it) {
        resultado.push_front(*it);
    }
    return resultado;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P2_H
