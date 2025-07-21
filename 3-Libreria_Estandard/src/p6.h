//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H
#define PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H

#include <vector>
#include <iterator>
#include <algorithm>
#include <tuple>
#include <stdexcept>

template<typename Container>
using ElementType = typename Container::value_type;

template <typename T, typename Tuple, std::size_t... Is>
void add_elements_to_row(std::vector<T>& row, const Tuple& tup, std::index_sequence<Is...>) {
    (row.push_back(*std::get<Is + 1>(tup)), ...);
}

template <typename Container, typename... Containers>
auto zip(const Container& c1, const Containers&... cs) {
    using T = ElementType<Container>;

    std::vector<std::ptrdiff_t> sizes = {
        std::distance(std::begin(c1), std::end(c1)),
        std::distance(std::begin(cs), std::end(cs))...
    };

    auto first_size = sizes.front();
    for (auto s : sizes) {
        if (s != first_size) {
            throw std::runtime_error("ERROR: Containers do not have same size");
        }
    }

    std::vector<std::vector<T>> resultado;
    resultado.reserve(first_size);

    auto its = std::make_tuple(std::begin(c1), std::begin(cs)...);

    for (std::ptrdiff_t i = 0; i < first_size; ++i) {
        std::vector<T> fila;
        fila.reserve(sizeof...(cs) + 1);
        fila.push_back(*std::get<0>(its));
        add_elements_to_row(fila, its, std::make_index_sequence<sizeof...(cs)>{});
        resultado.push_back(std::move(fila));
        std::apply([](auto&... iterators) { (..., ++iterators); }, its);
    }

    return resultado;
}

#endif //PROG3_UNIT2_STANDAR_LIBRARY_V2022_1_P6_H
