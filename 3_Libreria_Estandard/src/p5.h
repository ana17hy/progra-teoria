//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P5_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P5_H

template<typename... Args>
auto unpack(Args&... args) {
    return tie(args...);
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P5_H
