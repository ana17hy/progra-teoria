//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H

#include <stack>
#include <functional>

void question_6();

template <typename T>
T find_in_stack(std::stack<T> s, std::function<bool(T)> cmpr) {
    while (!s.empty()) {
        T current = s.top();
        if (cmpr(current)) {
            return current;
        }
        s.pop();
    }
    return T{};
}

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H
