//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_POLYNOMIAL_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_POLYNOMIAL_H

#include <iostream>

namespace math::operations {

    class polynomial {
    public:
        polynomial(); // constructor por defecto
        polynomial(int deg, const double* coeffs); // constructor parametrizado
        polynomial(const polynomial& other);       // constructor de copia
        polynomial& operator=(const polynomial& other); // asignación por copia
        polynomial& operator=(polynomial&& other) noexcept;
        ~polynomial(); // destructor

        double get_coefficient(int degree) const;
        double& get_coefficient(int degree);

        int degree() const;
        int get_degree() const;
        polynomial operator+(const polynomial& other) const;
        polynomial operator-(const polynomial& other) const;
        polynomial operator*(const polynomial& other) const;

        friend std::ostream& operator<<(std::ostream& os, const polynomial& p);
        friend double evaluate(const polynomial& p, double x);

    private:
        double* coefficients;
        int deg;
    };

    double evaluate(const polynomial& p, double x);

}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_POLYNOMIAL_H
