#include <iostream>

using namespace std;

struct casa {
    int cantidadPartes = 0;
    void* data = nullptr;
    struct casa* next = nullptr;
    struct casa* previous = nullptr;
};