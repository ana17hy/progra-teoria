//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_POINT_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_POINT_H

#include <iostream>
using namespace std;

namespace geometry {
    class point {
        int x_coord, y_coord;

    public:
        point(int x = 0, int y = 0);
        int get_y() const;
        int get_x() const;
        point operator+(const point&) const;
        bool operator==(const point&) const;
        friend ostream& operator<<(ostream&, const point&);
    };
}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_POINT_H
