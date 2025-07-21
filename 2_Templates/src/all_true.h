//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_2_V2025_01_ALL_TRUE_H
#define PROG3_FUNDAMENTOS_TASK_2_V2025_01_ALL_TRUE_H

namespace utils {
    namespace logic {

        template<typename... Args>
        bool all_true(Args... args) {
            bool arr[] = {args...};
            bool result = true;

            for (int i = 0; i < sizeof...(args); i++) {
                if (!arr[i]) {
                    result = false;
                }
            }

            return result;
        }

    }
}

#endif //PROG3_FUNDAMENTOS_TASK_2_V2025_01_ALL_TRUE_H
