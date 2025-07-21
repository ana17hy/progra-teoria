//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
auto delete_duplicated(T& contenedor){
    T resultado{};
    for(auto& item:contenedor){
        if(std::find(resultado.begin(), resultado.end(), item) == resultado.end()){
            resultado.push_back(item);
        }
    }
    return resultado;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P4_H
