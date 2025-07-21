//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "fraction.h"
using namespace std;

namespace math::operations {

    int calcular_mcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    fraction::fraction() {
        numerador = 0;
        denominador = 1;
    }

    fraction::fraction(int n, int d) {
        int mcd = calcular_mcd(abs(n), abs(d));
        numerador = n / mcd;
        denominador = d / mcd;

        if (denominador < 0) {
            numerador *= -1;
            denominador *= -1;
        }
    }

    int fraction::get_numerator() const {
        return numerador;
    }

    int fraction::get_denominator() const {
        return denominador;
    }

    fraction fraction::operator+(const fraction& other) const {
        return fraction(numerador * other.denominador + other.numerador * denominador,
                        denominador * other.denominador);
    }

    fraction fraction::operator-(const fraction& other) const {
        return fraction(numerador * other.denominador - other.numerador * denominador,
                        denominador * other.denominador);
    }

    fraction fraction::operator*(const fraction& other) const {
        return fraction(numerador * other.numerador, denominador * other.denominador);
    }

    fraction fraction::operator/(const fraction& other) const {
        return fraction(numerador * other.denominador, denominador * other.numerador);
    }

    bool fraction::operator==(const fraction& other) const {
        return numerador == other.numerador && denominador == other.denominador;
    }

    bool comparar(const fraction& a, const fraction& b) {
        return a == b;
    }

}
