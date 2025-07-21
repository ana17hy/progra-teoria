//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H

#include <initializer_list>

template<typename T, size_t cap>
class fixed_stack {
    T array[cap];
    int sz = -1;

public:
    fixed_stack() = default;

    fixed_stack(std::initializer_list<T> in_list){
        int i = 0;
        for (T item : in_list) {
            if (i < cap) {
                array[i] = item;
                i++;
            } else {
                break;
            }
        }
        sz = i - 1;
    }

    T top() {
        return array[sz];
    }

    void pop() {
        if (sz >= 0) {
            array[sz] = T{};
            sz--;
        }
    }

    bool push(const T& value) {
        if (sz == static_cast<int>(cap) - 1) {
            return false;
        }
        sz++;
        array[sz] = value;
        return true;
    }

    bool empty() const {
        return sz == -1;
    }

    int size() const {
        return sz + 1;
    }

    T* begin() { return std::begin(array); }
};

template<typename T, size_t cap>
class fixed_stack_pusher {
    fixed_stack<T, cap>& stack;

public:
    explicit fixed_stack_pusher(fixed_stack<T, cap>& s) : stack(s) {}

    fixed_stack_pusher& operator++() {
        return *this;
    }

    fixed_stack_pusher operator++(int) {
        fixed_stack_pusher tmp = *this;
        ++(*this);
        return tmp;
    }

    fixed_stack_pusher& operator=(const T& value) {
        stack.push(value);
        return *this;
    }

    fixed_stack_pusher& operator*() {
        return *this;
    }
};

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P9_H
