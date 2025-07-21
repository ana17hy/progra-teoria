//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_SYSTEM_LOG_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_SYSTEM_LOG_H

#include <fstream>
#include <string>

namespace performance::monitoring {
    class system_log {
    private:
        std::ofstream log_file;

    public:
        explicit system_log(const std::string& filename);
        void start(const std::string& message);
        void stop(const std::string& message);
    };
}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_SYSTEM_LOG_H
