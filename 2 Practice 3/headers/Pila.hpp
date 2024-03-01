#ifndef PILA_H
#define PILA_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Pila {
    private:
        //Attributes...
        int datos[10];
        int tope;

    public:
        //Methods...
        Pila();
        void push(int);
        void pop();
        void viewPila();
        bool pilaLlena();
        bool pilaVacia();
        ~Pila();
};

Pila::Pila() {
    this->tope = 0;
}

void Pila::push(int valor) {
    if (pilaLlena() == false) {
        this->datos[this->tope]=valor;
        this->tope++;
    } 
    else 
        cout << "Pila LLena" << endl;
}

void Pila::pop() {
    if(pilaVacia()==false){
        this->datos[this->tope] = 0;
        this->tope--;
    }
    else
        cout << "Pila Vacia" << endl;
}

void Pila::viewPila() {
    for(int i = this->tope - 1; i >= 0; i--) {
        cout << this->datos[i] << endl;
    }
    cout << endl;
}

bool Pila::pilaLlena() {

    return (this->tope == 10);
}

bool Pila::pilaVacia() {

    return (this->tope == 0);
}

Pila::~Pila() {
}

#endif