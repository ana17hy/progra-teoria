//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "product.h"
using namespace std;

#include "product.h"
using namespace std;

namespace company {

    product::product(const std::string& name, double price, double weight)
        : name(name), price(price), weight(weight) {}

    std::string product::get_name() const {
        return name;
    }

    double product::get_price() const {
        return price;
    }

    double product::get_weight() const {
        return weight;
    }

    bool product::operator==(const product& other) const {
        return name == other.name &&
               price == other.price &&
               weight == other.weight;
    }

    bool product::operator<(const product& other) const {
        return (price < other.price) ||
               (price == other.price && weight < other.weight);
    }

    bool compare_by_value(const product& a, const product& b) {
        double ratio_a = a.get_price() / a.get_weight();
        double ratio_b = b.get_price() / b.get_weight();
        return ratio_a >= ratio_b;
    }
}
