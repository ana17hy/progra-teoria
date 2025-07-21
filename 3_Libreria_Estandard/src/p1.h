//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H

#include <cstdlib>
#include <vector>
#include<deque>
#include <list>
#include <forward_list>
using namespace std;


template<typename t,typename res_t=vector<t>>

auto split_range(const t &contenedor,int split){
    int size=contenedor.size();
    res_t result{};
    int i=0;
    t slice{};
    for( auto it=begin(contenedor);it!=end(contenedor);it++){
        if(slice.size() == size / split && i != split-1){
            result.push_back(slice);
            i++;
            slice=t{};
        }
        slice.push_back(*it);
    }
    result.push_back(slice);
    return result;
}

template<typename t,typename res_t=vector<forward_list<t>>>

auto split_range(const forward_list<t> &container,int split){
    int size=distance(container.begin(), container.end()) ;
    res_t result{};
    int i=0,res=size%split;
    forward_list<t> slice{};
    vector<t> aux;
    for(auto& item: container){
        aux.push_back(item);
    }
    for( auto it=--end(aux);it>=begin(aux);it--){
        if(distance(slice.begin(), slice.end()) == ((size / split)+res) and  i == 0 or(distance(slice.begin(), slice.end()) == size / split and i!=0)){
            result.insert(result.begin(),slice);
            i++;
            slice=forward_list<t>{};
        }
        slice.push_front(*it);

    }
    result.insert(result.begin(),slice);
    return result;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P1_H
