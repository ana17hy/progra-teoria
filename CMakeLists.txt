cmake_minimum_required(VERSION 3.31)
project(prograTeo)

set(CMAKE_CXX_STANDARD 20)

add_executable(prograTeo main.cpp
        1-Fundamentos/src/bag.h
        1-Fundamentos/src/bag.cpp
        1-Fundamentos/src/fraction.cpp
        1-Fundamentos/src/logger.cpp
        1-Fundamentos/src/point.cpp
        1-Fundamentos/src/polynomial.cpp
        1-Fundamentos/src/product.cpp
        1-Fundamentos/src/system_log.cpp
        1-Fundamentos/src/vector_3d.cpp
        2-Templates/src/all_true.h
        2-Templates/src/apply_to_all.h
        2-Templates/src/comparator.h
        2-Templates/src/dimensions.h
        2-Templates/src/invoke_multiple.h
        2-Templates/src/max_static.h
        2-Templates/src/printer_specialized.h
        2-Templates/src/static_array.h
        2-Templates/src/sum_variadic.h
        2-Templates/src/tuple_printer.h
        3-Libreria_Estandard/src/p1.cpp
        3-Libreria_Estandard/src/p2.h
        3-Libreria_Estandard/src/p3.h
        3-Libreria_Estandard/src/p4.h
        3-Libreria_Estandard/src/p5.h
        3-Libreria_Estandard/src/p6.h
        3-Libreria_Estandard/src/p7.h
        3-Libreria_Estandard/src/p8.h
        3-Libreria_Estandard/src/p9.h
        4-Adaptadores/src/P1.h
        4-Adaptadores/src/P2.h)
