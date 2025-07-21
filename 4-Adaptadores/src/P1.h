//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H

#include <stack>

void question_1();

template <typename T>
std::stack<T> merge_stacks(std::stack<T> a, std::stack<T> b) {
    std::stack<T> temp;
    std::stack<T> result;
    bool turn = true;
    
    while (!a.empty() || !b.empty()) {
        if (turn && !b.empty()) {
            temp.push(b.top());
            b.pop();
        } else if (!turn && !a.empty()) {
            temp.push(a.top());
            a.pop();
        }
        turn = !turn;
        if (a.empty() && !b.empty()) turn = true;
        if (b.empty() && !a.empty()) turn = false;
    }
    
    while (!temp.empty()) {
        result.push(temp.top());
        temp.pop();
    }
    
    return result;
}

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
