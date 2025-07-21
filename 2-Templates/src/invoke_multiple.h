//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_INVOKE_MULTIPLE_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_INVOKE_MULTIPLE_H

namespace functional::meta {

    // nada
    inline void invoke_multiple() {}

    // caso recursivo
    template <typename First, typename... Rest>
    void invoke_multiple(First f, Rest... rest) {
        f(); // ejecutar el primero
        invoke_multiple(rest...); // y lo demas
    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_INVOKE_MULTIPLE_H
