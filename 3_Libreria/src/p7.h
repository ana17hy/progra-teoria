//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H

template<typename T>
auto rotate_range(T &contenedor, int rotar){
    if(rotar <= 0)
        rotar+= contenedor.size();
    if(rotar==0) return contenedor;
    T resultado{};
    auto it=end(contenedor);
    for(int i=0; i < rotar; i++){
        it--;
    }
    for(int i=0; i < contenedor.size(); i++){
        if(it==end(contenedor))
            it=begin(contenedor);
        resultado.push_back(*it);
        it++;
    }
    return resultado;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P7_H
