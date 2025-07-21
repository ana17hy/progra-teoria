//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_FRACTION_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_FRACTION_H

namespace math::operations {

    class fraction {
    public:
        fraction(); // constructor por defecto
        fraction(int n, int d); // constructor parametrizado

        int get_numerator() const;
        int get_denominator() const;

        fraction operator+(const fraction& other) const;
        fraction operator-(const fraction& other) const;
        fraction operator*(const fraction& other) const;
        fraction operator/(const fraction& other) const;

        bool operator==(const fraction& other) const;

        // Función friend para comparar
        friend bool comparar(const fraction& a, const fraction& b);

    private:
        int numerador;
        int denominador;
    };

    int calcular_mcd(int a, int b);

}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_FRACTION_H
