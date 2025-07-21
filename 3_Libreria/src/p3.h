//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template <typename contenedor, typename T>
auto delete_range(contenedor& cont, T valor){
    contenedor resultado{};
    for(T& it:cont){
        if(it != valor){
            resultado.push_back(it);
        }
    }
    return resultado;
}

template <typename contenedor, typename T>

auto delete_range(contenedor& cont, initializer_list<T> lista){
    vector<T> del=lista;
    contenedor resultado{};
    for(T& item:cont){
        if(find(del.begin(),del.end(),item)==del.end()){
            resultado.push_back(item);
        }
    }
    return resultado;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P3_H
