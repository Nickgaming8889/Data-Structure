#ifndef LISTD_H
#define LISTD_H

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Nodo {
public:
    string nombre;
    int id;
    Nodo* siguiente;

    Nodo(string nombre, int id) {
        this->nombre = nombre;
        this->id = id;
        siguiente = nullptr;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "ID: " << id << endl;
    }
};

class ListaContactos {
public:
    Nodo* primero;

    ListaContactos() {
        primero = nullptr;
    }

    void agregarContacto(string nombre, int id) {
        Nodo* nuevo = new Nodo(nombre, id);
        if (primero == nullptr) {
            primero = nuevo;
        } else {
            Nodo* actual = primero;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevo;
        }
    }

    void eliminarContacto(string nombre) {
        if (primero == nullptr) {
            return;
        }

        Nodo* anterior = nullptr;
        Nodo* actual = primero;

        while (actual != nullptr && actual->nombre != nombre) {
            anterior = actual;
            actual = actual->siguiente;
        }

        if (actual == nullptr) {
            return;
        }

        if (anterior == nullptr) {
            primero = primero->siguiente;
        } else {
            anterior->siguiente = actual->siguiente;
        }

        delete actual;
    }

    Nodo* buscarContactoPorNombre(string nombre) {
        if (primero == nullptr) {
            return nullptr;
        }

        Nodo* actual = primero;
        while (actual != nullptr && actual->nombre != nombre) {
            actual = actual->siguiente;
        }

        return actual;
    }

    Nodo* buscarContactoPorID(int id) {
        if (primero == nullptr) {
            return nullptr;
        }

        Nodo* actual = primero;
        while (actual != nullptr && actual->id != id) {
            actual = actual->siguiente;
        }

        return actual;
    }

    void mostrarContactos() {
        if (primero == nullptr) {
            cout << "La lista está vacía." << endl;
            return;
        }

        Nodo* actual = primero;
        while (actual != nullptr) {
            cout << "Nombre: " << actual->nombre << endl;
            cout << "ID: " << actual->id << endl << endl;
            actual = actual->siguiente;
        }
    }

    void modificarContacto(string nombre, string nuevoNombre, int nuevoID) {
        Nodo* contacto = buscarContactoPorNombre(nombre);

        if (contacto == nullptr) {
            cout << "No se encontró el contacto." << endl;
            return;
        }

        contacto->nombre = nuevoNombre;
        contacto->id = nuevoID;
    }
};

#endif