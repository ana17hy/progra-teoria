//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_PRINTER_SPECIALIZED_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_PRINTER_SPECIALIZED_H

#include <iostream>
#include <vector>
#include <string>

template <typename T>
struct printer {
    static void print(const T& value) {
        std::cout << value;
    }
};

template <>
struct printer<bool> {
    static void print(bool value) {
        std::cout << (value ? "true" : "false");
    }
};

template <typename T>
struct printer<std::vector<T>> {
    static void print(const std::vector<T>& vec) {
        std::cout << "[";
        for (const auto& x : vec) {
            printer<T>::print(x);
            std::cout << "  ";
        }
        std::cout << "]";
    }
};

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_PRINTER_SPECIALIZED_H
