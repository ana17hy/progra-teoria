//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_LOGGER_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_LOGGER_H

#include <string>
#include <fstream>
using namespace std;

namespace file {
    namespace operations {

        class logger {
            string file_path;

        public:
            explicit logger(const string& path);
            void write(const string& msg);
            logger& operator<<(const string& msg);
        };

    }
}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_LOGGER_H
