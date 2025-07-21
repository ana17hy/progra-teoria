# Task #Task: Templates de clases y Funciones  
**course:** Programación III  
**unit:** 2  
**cmake project:** prog3_unit2_templates_task_2_v2025_01
## Indicaciones Específicas
El tiempo límite para la evaluación es de 2 semanas.

Cada pregunta deberá ser respondida en un archivo fuente (.cpp) y un archivo cabecera (.h) correspondiente:

 - `sum_variadic.h`
 - `all_true.h`
 - `max_static.h`
 - `apply_to_all.h`
 - `invoke_multiple.h`
 - `static_array.h`
 - `tuple_printer.h`
 - `comparator.h`
 - `dimensions.h`
 - `printer_specialized.h`  

Deber�s subir estos archivos directamente a www.gradescope.com o se puede crear un .zip que contenga todos ellos y subirlo.

## Question #1 - sum_variadic - template function (2 points)

**Descripción**  
Implementar `sum_variadic` en `utils::math` que:
- Acepta múltiples argumentos numéricos del mismo tipo.
- Devuelve la suma de todos.
- Usa una `fold expression`.

**Casos de prueba sugeridos**
```cpp
assert(utils::math::sum_variadic(1, 2, 3, 4) == 10);
assert(utils::math::sum_variadic(1.5, 2.5, 3.0) == 7.0);
assert(utils::math::sum_variadic(42) == 42);
assert(utils::math::sum_variadic(-1, -2, -3, 6) == 0);
```

## Question #2 - all_true - template function (2 points)

**Descripción**  
Función `all_true` en `utils::logic` que:
- Acepta varios `bools`.
- Retorna `true` solo si todos son `true`.
- Usa `fold expression` con `&&`.

**Casos de prueba sugeridos**
```cpp
assert(utils::logic::all_true(true, true, true, true));
assert(!utils::logic::all_true(true, false, true));
assert(utils::logic::all_true(true));
assert(!utils::logic::all_true(false));
```

## Question #3 - max_static - template function (2 points)

**Descripción**  
Función `max_static` en `compile_time`:
- Usa parámetros no tipo: `<int A, int B>`.
- Devuelve el mayor de ambos usando `constexpr`.

**Casos de prueba sugeridos**
```cpp
static_assert(compile_time::max_static<5, 3>() == 5);
static_assert(compile_time::max_static<10, 10>() == 10);
static_assert(compile_time::max_static<0, -1>() == 0);
static_assert(compile_time::max_static<-5, -2>() == -2);
```


## Question #4 - apply_to_all - template function (2 points)

**Descripción**  
`apply_to_all` en `meta::utility`:
- Usa `auto F` como parámetro no tipo.
- Aplica `F` a todos los argumentos usando `fold`.

**Casos de prueba sugeridos**
```cpp
vector<int> v;
meta::utility::apply_to_all([&v](const int x){ v.push_back(x + 1); }, 1, 2, 3);
for (const auto& item: v) std::cout << item << " ";
```
```cpp
meta::utility::apply_to_all<[](int){ std::cout << "Hello world!" << std::endl; } >(1);
```
```cpp
vector<const char*> logs;
meta::utility::apply_to_all([&](const char* s){ logs.push_back(s); }, "uno", "dos", "tres");
for (const auto& log : logs) std::cout << log << " ";
```
```cpp
static int count = 0;
meta::utility::apply_to_all<[](auto i){ ++count; }>(1, 2, 3, 4);
std::cout << count;
```

## Question #5 - invoke_multiple - template function (2 points)

**Descripción**  
`invoke_multiple` en `functional::meta`:
- Acepta múltiples lambdas.
- Las ejecuta en orden usando `fold`.

**Casos de prueba sugeridos**
```cpp
int a = 0, b = 0;
functional::meta::invoke_multiple([&]{ a = 5; }, [&]{ b = 10; });
std::cout << a << " " << b << std::endl;

std::string out;
functional::meta::invoke_multiple([&]{ out += "X"; }, [&]{ out += "Y"; }, [&]{ out += "Z"; });
std::cout << out << std::endl;

functional::meta::invoke_multiple();  // no error

int count = 0;
functional::meta::invoke_multiple([&count]{ count += 2; }, [&count]{ count *= 3; });
std::cout << count << std::endl;
```

## Question #6 - static_array - template class (2 points)

**Descripción**  
Clase `static_array<T, N>` en `containers`:
- Arreglo fijo de tamaño `N`.
- Métodos: `[]`, `begin`, `end`, `size`.

**Casos de prueba sugeridos**
```cpp
static_array<int, 3> arr1 = {1, 2, 3};
asset((arr1[0] == 1 && arr1[2] == 3));

static_array<int, 5> arr2 = {1, 2, 3, 4, 5};
asset(std::accumulate(arr2.begin(), arr2.end(), 0) == 15);

static_array<int, 20> arr3;
arr3[1] = 30;
asset(arr3[1] == 30);

static_array<int, 5> arr4 = {4, 2, 1, 7, 5};
std::sort(arr4.begin(), arr4.end());
asset((arr4[0] == 1 && arr4[4] == 7));
```

## Question #7 - tuple_printer - template class (2 points)

**Descripción**  
Clase `tuple_printer<Args...>` en `meta::utility`:
- Método `print` para imprimir `tuple<Args...>` separados por coma.

**Casos de prueba sugeridos**
```cpp
meta::utility::tuple_printer<int, int, int>::print(tuple{10, 20, 30}, std::cout);
meta::utility::tuple_printer<const char*, double, int>::print(tuple{"x", 3.5, 42}, std::cout);
meta::utility::tuple_printer<bool>::print(tuple{true}, std::cout << std::boolalpha);
meta::utility::tuple_printer<>::print(tuple{}, std::cout);
```

## Question #8 - comparator - template class (2 points)

**Descripción**  
Clase `comparator<Compare>` en `algorithms::utility`:
- Usa `template<template<typename> typename Compare>`.
- Método `compare(a, b)` que aplica `Compare<T>()(a, b)`.

**Casos de prueba sugeridos**
```cpp
std::cout << std::boolalpha << algorithms::utility::comparator<std::less>::compare(2, 3);
std::cout << std::boolalpha << algorithms::utility::comparator<std::greater>::compare(9, 2);
std::cout << std::boolalpha << algorithms::utility::comparator<>::compare(9, 2);
```
```cpp
struct Person {
    int age = 0;
    bool operator<(const Person &other) const { return age < other.age; }
};
```
```cpp
std::cout << std::boolalpha << algorithms::utility::comparator<std::less>::compare(Person{20}, Person{30});
```

## Question #9 - dimensions - template class (2 points)

**Descripción**  
Clase `dimensions<int...>` en `geometry::meta`:
- Método `total()` devuelve el producto de todas las dimensiones.

**Casos de prueba sugeridos**
```cpp
assert(geometry::meta::dimensions<4, 5>::total() == 20);
assert(!geometry::meta::dimensions<>::total() == 1);
assert(geometry::meta::dimensions<7>::total() == 7);
assert(geometry::meta::dimensions<1, 2, 3>::total() == 6);
```

## Question #10 - printer_specialized - template class (2 points)

**Descripción**  
Clase `printer<T>` en `meta::special`:
- General: imprime `T`.
- Especialización total: `bool` → "true"/"false"
- Especialización parcial: `std::vector<T>` → "[1, 2, 3]"

**Casos de prueba sugeridos**
```cpp
printer<int>::print(42);          // "42"
printer<bool>::print(true);       // "true"
printer<vector<int>>::print({1,2,3}); // "[1 2 3 ]"
printer<vector<string>>::print({});  // "[]"
```

