#include <iostream>
#include <vector>
#include "listaGeneral.h"

int main () {
    vector<string> listaPrioritaria = {"Chimenea", "Techo", "Ventanas", "Puertas", "Paredes", "Piso", "Cimientos"}; 
    pilaInstructions instrucciones;
    pilaInstructionsAux apoyo;
    pilaResultado resultado;
    colaLego colaDeLegos;
    casa tCasa;
    int cantidadElementos = 0;

    instrucciones.addToBegining("Puertas");
    instrucciones.addToBegining("Paredes");
    instrucciones.addToBegining("Chimenea");
    instrucciones.addToBegining("Piso");
    instrucciones.addToBegining("Ventanas");
    instrucciones.addToBegining("Cimientos");
    instrucciones.addToBegining("Techo");

    colaDeLegos.addToTheEnd(1);
    colaDeLegos.addToTheEnd(2);
    colaDeLegos.addToTheEnd(3);
    colaDeLegos.addToTheEnd(4);
    colaDeLegos.addToTheEnd(5);
    colaDeLegos.addToTheEnd(6);
    colaDeLegos.addToTheEnd(7);
/*
    void* elementoSacado = colaDeLegos.removeFirst();
    if (elementoSacado != nullptr) {
        int elementoEntero = *static_cast<int*>(elementoSacado);
    };
*/

    for(size_t i = 0; i < listaPrioritaria.size(); i++ ) {
        string elemento = lista[i];
        //string inst = instrucciones.removeFirst();
        for(int k = -2; k < instrucciones.getSize(); k++){
            string* instPointer = static_cast<string*>(instrucciones.removeFirst());
            string inst = *instPointer;
            if(inst==elemento){
                resultado.addToBegining(inst);
                if(!apoyo.isEmpty()){
                    for(int j = 1; j < cantidadElementos; j++) {
                        string* instPointer2 = static_cast<string*>(apoyo.removeFirst());
                        string inst2 = *instPointer2;
                        instrucciones.addToBegining(inst2);
                    }
                    cantidadElementos = 0;
                    break;
                }
            } else {
                apoyo.addToBegining(inst);
                cantidadElementos++;
            }
            std::cout << "Elemento " << i << ": " << elemento << std::endl;
            k--;
        }
    }
    sizeOfResult = resultado.getSize();
    //Cuando salgo de este for, en la pila resultado, tengo el orden de las partes a construir

    for(int m=0; m == sizeOfResult ; m) {
        string* instPointer3 = static_cast<string*>(resultado.removeFirst());
        string inst3 = *instPointer3;
        
        legos = colaDeLegos.getSize();

        if(inst3=="Cimientos"){
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==1) {
                    tCasa.constuirCimientos();    
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Piso") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==2) {
                    tCasa.constuirPiso();   
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Paredes") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==3) {
                    tCasa.constuirPared();   
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Puertas") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==4) {
                    tCasa.constuirPuerta();
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Ventanas") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==5) {
                    tCasa.constuirVentana();
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Techo") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==6) {
                    tCasa.constuirTecho();
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
        if(inst3=="Chimenea") {
            for(int h=0; h < legos; h++){
                void* elementoSacado = colaDeLegos.removeFirst();
                if (elementoSacado != nullptr) {
                    int elementoEntero = *static_cast<int*>(elementoSacado);
                }
                if(elementoSacado==7) {
                    tCasa.constuirChimenea();
                }else
                {
                    colaDeLegos.addToTheEnd(elementoSacado);
                }
            };
        }
    }
};