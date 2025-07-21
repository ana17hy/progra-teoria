//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "system_log.h"
using namespace std;

namespace performance::monitoring {

    system_log::system_log(const string& filename) {
        log_file.open(filename, ios::app);
    }

    void system_log::start(const string& message) {
        log_file << message << ",";
        log_file.flush(); // Forzamos que se guarde en el archivo
    }

    void system_log::stop(const string& message) {
        log_file << message << "\n";
        log_file.flush();
    }
}
