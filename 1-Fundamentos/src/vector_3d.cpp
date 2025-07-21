//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "vector_3d.h"
using namespace std;

namespace geometry {

    // Constructor
    vector_3d::vector_3d(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // Getter
    double vector_3d::get_x() const {
        return this->x;
    }

    double vector_3d::get_y() const {
        return this->y;
    }

    double vector_3d::get_z() const {
        return this->z;
    }

    // Suma de vectores
    vector_3d vector_3d::operator+(const vector_3d& v) const {
        double new_x = this->x + v.x;
        double new_y = this->y + v.y;
        double new_z = this->z + v.z;
        return vector_3d(new_x, new_y, new_z);
    }

    // Resta
    vector_3d vector_3d::operator-(const vector_3d& v) const {
        return vector_3d(this->x - v.x, this->y - v.y, this->z - v.z);
    }

    // Asignación
    vector_3d& vector_3d::operator=(const vector_3d& v) {
        if (this != &v) {
            this->x = v.x;
            this->y = v.y;
            this->z = v.z;
        }
        return *this;
    }

    // Producto punto
    double dot_product(const vector_3d& a, const vector_3d& b) {
        double part1 = a.x * b.x;
        double part2 = a.y * b.y;
        double part3 = a.z * b.z;
        return part1 + part2 + part3;
    }
}
