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
    void* data = nullptr; 
    struct colaLego* next = nullptr;
    struct colaLego* previous = nullptr;
};
