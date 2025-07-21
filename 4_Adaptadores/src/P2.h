//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H

#include <stack>

void question_2();

template <typename T>
std::stack<T> join_stacks(std::stack<T> a, std::stack<T> b) {
    std::stack<T> temp;
    std::stack<T> result;
    
    while (!b.empty()) {
        temp.push(b.top());
        b.pop();
    }
    
    while (!a.empty()) {
        temp.push(a.top());
        a.pop();
    }
    
    while (!temp.empty()) {
        result.push(temp.top());
        temp.pop();
    }
    
    return result;
}

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H
