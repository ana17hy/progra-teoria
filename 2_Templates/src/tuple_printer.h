//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_TUPLE_PRINTER_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_TUPLE_PRINTER_H

#include <tuple>
#include <iostream>

namespace meta {
    namespace utility {

        // imprime una tupla separada por espacios
        template <typename... Args>
        struct tuple_printer {
            static void print(const std::tuple<Args...>& tpl, std::ostream& os) {
                std::apply([&os](const Args&... elems) {
                    // para saber si hay que poner el espacio
                    std::size_t i = 0;
                    // para imprimir todos los elementos con espacio
                    ((os << (i++ ? " " : "") << elems), ...);
                }, tpl);
            }
        };
    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_TUPLE_PRINTER_H
