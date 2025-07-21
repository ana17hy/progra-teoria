//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_DIMENSIONS_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_DIMENSIONS_H

namespace geometry {
    namespace meta {
        template <int... Dims>
        struct dimensions {
            static constexpr int total() {
                return (Dims * ...); // producto de todos
            }
        };

        template <>
        struct dimensions<> {
            static constexpr int total() { return 0; }
        };
    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_DIMENSIONS_H
