//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_STATIC_ARRAY_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_STATIC_ARRAY_H

#include <cstddef>  // para size_t
#include <initializer_list> // para initializer_list

namespace containers {

    template <typename T, std::size_t N>
    class static_array {
        T data[N] = {};

    public:
        // constructor
        static_array(std::initializer_list<T> init) {
            std::size_t i = 0;
            for (const T& value : init) {
                if (i < N) {
                    data[i++] = value;
                }
            }
        }

        // constructor
        static_array() = default;

        // acceso
        T& operator[](std::size_t index) {
            return data[index];
        }

        const T& operator[](std::size_t index) const {
            return data[index];
        }

        T* begin() { return data; }
        T* end() { return data + N; }

        const T* begin() const { return data; }
        const T* end() const { return data + N; }

        // tamañito
        std::size_t size() const { return N; }
    };

}

// para que los tests no tengan que escribir containers::
using namespace containers;

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_STATIC_ARRAY_H
