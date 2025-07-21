//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H

#include <stack>
using namespace std;

template<typename T>
stack<T> merge_stacks(stack<T> a, stack<T> b) {

    stack<T> aux;
    while (!a.empty() || !b.empty()) {
        if (!b.empty()) {
            aux.push(b.top());
            b.pop();
        }
        if (!a.empty()) {
            aux.push(a.top());
            a.pop();
        }
    }


    stack<T> result;
    while (!aux.empty()) {
        result.push(aux.top());
        aux.pop();
    }

    return result;
}

void question_1();

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
