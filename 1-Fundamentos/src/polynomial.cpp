//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "polynomial.h"
using namespace std;

namespace math::operations {

polynomial::polynomial() : coefficients(nullptr), deg(-1) {}

polynomial::polynomial(int deg_, const double* coeffs) : deg(deg_) {
    coefficients = new double[deg + 1];
    for (int i = 0; i <= deg; ++i) {
        coefficients[i] = coeffs[i];
    }
}

polynomial::polynomial(const polynomial& other) : deg(other.deg) {
    if (deg >= 0) {
        coefficients = new double[deg + 1];
        for (int i = 0; i <= deg; ++i) {
            coefficients[i] = other.coefficients[i];
        }
    } else {
        coefficients = nullptr;
    }
}

polynomial& polynomial::operator=(const polynomial& other) {
    if (this != &other) {
        delete[] coefficients;
        deg = other.deg;
        if (deg >= 0) {
            coefficients = new double[deg + 1];
            for (int i = 0; i <= deg; ++i) {
                coefficients[i] = other.coefficients[i];
            }
        } else {
            coefficients = nullptr;
        }
    }
    return *this;
}

polynomial& polynomial::operator=(polynomial&& other) noexcept {
    if (this != &other) {
        delete[] coefficients;
        coefficients = other.coefficients;
        deg = other.deg;
        other.coefficients = nullptr;
        other.deg = -1;
    }
    return *this;
}

polynomial::~polynomial() {
    delete[] coefficients;
}

double polynomial::get_coefficient(int degree) const {
    return (degree <= deg) ? coefficients[degree] : 0;
}

double& polynomial::get_coefficient(int degree) {
    return coefficients[degree];
}

int polynomial::degree() const {
    return deg;
}

int polynomial::get_degree() const {
    return deg;
}

polynomial polynomial::operator+(const polynomial& other) const {
    int max_deg = std::max(deg, other.deg);
    double* result_coeffs = new double[max_deg + 1]();
    for (int i = 0; i <= max_deg; ++i) {
        result_coeffs[i] = this->get_coefficient(i) + other.get_coefficient(i);
    }
    polynomial result(max_deg, result_coeffs);
    delete[] result_coeffs;
    return result;
}

polynomial polynomial::operator-(const polynomial& other) const {
    int max_deg = std::max(deg, other.deg);
    double* result_coeffs = new double[max_deg + 1]();
    for (int i = 0; i <= max_deg; ++i) {
        result_coeffs[i] = this->get_coefficient(i) - other.get_coefficient(i);
    }
    polynomial result(max_deg, result_coeffs);
    delete[] result_coeffs;
    return result;
}

polynomial polynomial::operator*(const polynomial& other) const {
    int new_deg = deg + other.deg;
    double* result_coeffs = new double[new_deg + 1]();
    for (int i = 0; i <= deg; ++i) {
        for (int j = 0; j <= other.deg; ++j) {
            result_coeffs[i + j] += coefficients[i] * other.coefficients[j];
        }
    }
    polynomial result(new_deg, result_coeffs);
    delete[] result_coeffs;
    return result;
}

std::ostream& operator<<(std::ostream& os, const polynomial& p) {
    for (int i = 0; i <= p.deg; ++i) {
        os << p.coefficients[i];
        if (i > 0)
            os << "x^" << i;
        if (i < p.deg)
            os << " ";
    }
    return os;
}

double evaluate(const polynomial& p, double x) {
    double result = 0;
    for (int i = 0; i <= p.deg; ++i) {
        result += p.coefficients[i] * std::pow(x, i);
    }
    return result;
}

}
