//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "point.h"
using namespace std;

namespace geometry {

    // Constructor
    point::point(int x, int y) {
        x_coord = x;
        y_coord = y;
    }

    // Obtener el valor de y
    int point::get_y() const {
        return y_coord;
    }

    // Obtener el valor de x
    int point::get_x() const {
        return x_coord;
    }

    // Operador de comparación
    bool point::operator==(const point& p) const {
        return x_coord == p.x_coord && y_coord == p.y_coord;
    }

    // Operador de suma
    point point::operator+(const point& p) const {
        point temp;
        temp = point(x_coord + p.x_coord, y_coord + p.y_coord);
        return temp;
    }

    // Operador de salida
    ostream& operator<<(ostream& out, const point& p) {
        out << "[" << p.x_coord << ", " << p.y_coord << "]";
        return out;
    }

}