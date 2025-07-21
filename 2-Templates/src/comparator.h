//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_COMPARATOR_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_COMPARATOR_H

#include <functional>

namespace algorithms::utility {
    template <template <typename> typename Compare = std::less>
    class comparator {
    public:
        template <typename T>
        static bool compare(const T& a, const T& b) {
            return Compare<T>()(a, b);}};}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_COMPARATOR_H
