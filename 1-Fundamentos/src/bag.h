//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2025_01_BAG_H
#define PROG3_FUNDAMENTOS_TASK_1_V2025_01_BAG_H

namespace structures {

    class bag {
    public:
        struct Element {
            int data;
            Element* next;

            Element(int val) {
                data = val;
                next = nullptr;
            }
        };

        bag() {
            inicio = nullptr;
            cantidad = 0;
        }

        void add(int val) {
            Element* nuevo = new Element(val);
            nuevo->next = inicio;
            inicio = nuevo;
            cantidad++;
        }

        Element* begin() {
            return inicio;
        }

        Element* end() {
            return nullptr;
        }

        int size() const {
            return cantidad;
        }

    private:
        Element* inicio;
        int cantidad;
    };

}

#endif //PROG3_FUNDAMENTOS_TASK_1_V2025_01_BAG_H
