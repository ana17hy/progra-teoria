//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_SUM_VARIADIC_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_SUM_VARIADIC_H

namespace utils {
    namespace math {

        template<typename T>
        T sum_variadic(T value) {
            return value;
        }

        template<typename T, typename U, typename... Args>
        T sum_variadic(T first, U second, Args... args) {
            return first + sum_variadic<T>(second, args...);
        }

    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_SUM_VARIADIC_H
