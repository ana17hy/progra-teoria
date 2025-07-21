//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "logger.h"
using namespace std;

namespace file {
    namespace operations {

        logger::logger(const string& path) : file_path(path) {}

        void logger::write(const string& msg) {
            ofstream fout;
            fout.open(file_path, ios::app); // Modo append
            if (fout.is_open()) {
                fout << msg << endl;
            }
        }

        // Sobrecarga del operador
        logger& logger::operator<<(const string& msg) {
            this->write(msg);
            return *this;
        }
    }
}