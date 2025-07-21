//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_PRODUCT_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_PRODUCT_H

#include <string>

namespace company {

    class product {
    private:
        std::string name;
        double price;
        double weight;

    public:
        product(const std::string& name, double price, double weight);

        std::string get_name() const;
        double get_price() const;
        double get_weight() const;

        bool operator==(const product& other) const;
        bool operator<(const product& other) const;
    };

    bool compare_by_value(const product& a, const product& b);

}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_PRODUCT_H
