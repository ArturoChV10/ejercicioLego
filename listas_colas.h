#ifndef _NODOGENERICO_
#define _NODOGENERICO_ 1

struct pilaInstructions {
    void* data = nullptr; 
    struct pilaInstructions* next = nullptr;
    struct pilaInstructions* previous = nullptr;
};

struct pilaInstructionsAux {
    void* data = nullptr; 
    struct pilaInstructionsAux* next = nullptr;
    struct pilaInstructionsAux* previous = nullptr;
};

struct colaLego {
    int data = nullptr; 
    struct colaLego* next = nullptr;
    struct colaLego* previous = nullptr;
};

struct pilaResultado {
    void* data = nullptr; 
    struct pilaResultado* next = nullptr;
    struct pilaResultado* previous = nullptr;
};

