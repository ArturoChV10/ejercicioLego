#ifndef _LISTAGENERICA_
#define _LISTAGENERICA_ 1

#include "listas_colas.h"
#include "casa.h"
#include <stdlib.h>


struct pilaInstructions {
    struct pilaInstructions* start = nullptr;
    struct pilaInstructions* end = nullptr;
    int size = 0;


    bool isEmpty() {
        if (size==0)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void addToEnd(void* pData) {
        struct pilaInstructions* newNode = (struct pilaInstructions*)malloc(sizeof(struct pilaInstructions)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->previous = end;
            end->next = newNode;
            end = newNode;
        }

        size++;
    }

    void addToBegining(void* pData) {
        struct pilaInstructions* newNode = (struct pilaInstructions*)malloc(sizeof(struct pilaInstructions)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    void* removeFirst() {
        void* result = nullptr;
        struct pilaInstructions* cursor = start;

        if (size>1) {
            start->next->previous = nullptr;
            start = start->next;
            cursor->next = nullptr;
            result = cursor->data;
            size--;
        } else if (size==1) {
            start = nullptr;
            end = nullptr;
            result = cursor->data;
            size--;
        }

        return result;
    }   
};

struct pilaInstructionsAux {
    struct pilaInstructionsAux* start = nullptr;
    struct pilaInstructionsAux* end = nullptr;
    int size = 0;


    bool isEmpty() {
        if (size==0)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void addToEnd(void* pData) {
        struct pilaInstructionsAux* newNode = (struct pilaInstructionsAux*)malloc(sizeof(struct pilaInstructionsAux)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->previous = end;
            end->next = newNode;
            end = newNode;
        }

        size++;
    }

    void addToBegining(void* pData) {
        struct pilaInstructionsAux* newNode = (struct pilaInstructionsAux*)malloc(sizeof(struct pilaInstructionsAux)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    void* removeFirst() {
        void* result = nullptr;
        struct pilaInstructionsAux* cursor = start;

        if (size>1) {
            start->next->previous = nullptr;
            start = start->next;
            cursor->next = nullptr;
            result = cursor->data;
            size--;
        } else if (size==1) {
            start = nullptr;
            end = nullptr;
            result = cursor->data;
            size--;
        }

        return result;
    }   
};

struct pilaResultado {
    struct pilaResultado* start = nullptr;
    struct pilaResultado* end = nullptr;
    int size =0;


    bool isEmpty() {
        if (size==0)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void addToEnd(void* pData) {
        struct pilaResultado* newNode = (struct pilaResultado*)malloc(sizeof(struct pilaResultado)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->previous = end;
            end->next = newNode;
            end = newNode;
        }

        size++;
    }

    void addToBegining(void* pData) {
        struct pilaResultado* newNode = (struct pilaResultado*)malloc(sizeof(struct pilaResultado)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    void* removeFirst() {
        void* result = nullptr;
        struct pilaResultado* cursor = start;

        if (size>1) {
            start->next->previous = nullptr;
            start = start->next;
            cursor->next = nullptr;
            result = cursor->data;
            size--;
        } else if (size==1) {
            start = nullptr;
            end = nullptr;
            result = cursor->data;
            size--;
        }

        return result;
    }   
};

struct colaLego {
    struct colaLego* start = nullptr;
    struct colaLego* end = nullptr;
    int size =0;

    bool isEmpty() {
        if (size==0)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void addToTheEnd(int pData) {
        struct colaLego* newNode = (struct colaLego*)malloc(sizeof(struct colaLego)); 
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    void* removeFirst() {
        void* result = nullptr;
        struct colaLego* cursor = start;

        if (size>1) {
            start->next->previous = nullptr;
            start = start->next;
            cursor->next = nullptr;
            result = cursor->data;
            size--;
        } else if (size==1) {
            start = nullptr;
            end = nullptr;
            result = cursor->data;
            size--;
        }

        return result;
    }      

};

struct casa {
    struct casa* start = nullptr;
    struct casa* end = nullptr;
    int size =0;

    bool isEmpty() {
        if (size==0)
        {
            return true;
        }else
        {
            return false;
        }
    }

    int getSize() {
        return size;
    }

    void constuirPared() {
        newNode = "Pared"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    
    void constuirPuerta() {
        newNode = "Puerta"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    
    void constuirVentana() {
        newNode = "Ventana"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    
    void constuirPiso() {
        newNode = "Piso"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }
    
    void constuirTecho() {
        newNode = "Techo"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }
    
    void constuirCimientos() {
        newNode = "Cimientos"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

    
    void constuirChimenea() {
        newNode = "Chimenea"
        newNode->data = pData;

        if (size==0) {
            start = newNode;
            end = newNode;
        } else {
            newNode->next = start;
            start->previous = newNode;
            start = newNode;
        }

        size++;
    }

};

#endif