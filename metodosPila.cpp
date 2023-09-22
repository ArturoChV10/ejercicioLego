#ifndef _STACK_
#define _STACK_ 0

#include "listaGeneral.h"

struct mPilaInstructions {
    struct pilaInstructions stackList;

    bool isEmpty() {
        return stackList.isEmpty();
    };

    void push(void* pElement) {
        stackList.addToBegining(pElement);
    };

    void* pop() {
        if (!stackList.isEmpty()) {
            return stackList.removeFirst();
        } else {
            return nullptr;
        }
    }

};

struct mPilaInstructionsAux {
    struct pilaInstructionsAux stackList;

    bool isEmpty() {
        return stackList.isEmpty();
    };

    void push(void* pElement) {
        stackList.addToBegining(pElement);
    };

    void* pop() {
        if (!stackList.isEmpty()) {
            return stackList.removeFirst();
        } else {
            return nullptr;
        }
    }

};

struct mPilaResultado {
    struct pilaResultado stackList;

    bool isEmpty() {
        return stackList.isEmpty();
    };

    void push(void* pElement) {
        stackList.addToBegining(pElement);
    };

    void* pop() {
        if (!stackList.isEmpty()) {
            return stackList.removeFirst();
        } else {
            return nullptr;
        }
    }

};
#endif