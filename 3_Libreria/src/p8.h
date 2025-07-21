//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H

#include <fstream>
#include <vector>
template<typename T=std::vector<std::string>>
auto filter_codes(const std::string &nom, char llave){
    std::ifstream file(nom);
    T resultado{};
    std::string linea;
    if (!file) {
        resultado.push_back("Error opening file!");
        return resultado;
    }
    while(getline(file, linea)){
        if(linea[0] == llave){
            resultado.push_back(linea);
        }
    }
    file.close();
    sort(resultado.begin(), resultado.end());
    return resultado;

}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P8_H
