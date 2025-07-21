//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_MAX_STATIC_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_MAX_STATIC_H

namespace compile_time {
    template<int A, int B>
    constexpr int max_static() {
        if (A >= B)
            return A;
        else
            return B;
    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_MAX_STATIC_H
