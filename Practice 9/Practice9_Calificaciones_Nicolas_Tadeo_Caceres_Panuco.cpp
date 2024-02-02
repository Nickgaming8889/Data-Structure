#include <iostream>
using namespace std;


void capturarCalificaciones(double* calificaciones, int numeroCalificaciones) {
    for (int i = 0; i < numeroCalificaciones; i++) {
        cout << "Ingrese la calificación " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}

double calcularPromedio(double* calificaciones, int numeroCalificaciones) {
    double suma = 0;
    for (int i = 0; i < numeroCalificaciones; i++) {
        suma += calificaciones[i];
    }
    return suma / numeroCalificaciones;
}

double encontrarMejorCalificacion(double* calificaciones, int numeroCalificaciones) {
    double mejorCalificacion = calificaciones[0];
    for (int i = 1; i < numeroCalificaciones; i++) {
        if (calificaciones[i] > mejorCalificacion) {
        mejorCalificacion = calificaciones[i];
        }
    }
    return mejorCalificacion;
}

int contarReprobados(double* calificaciones, int numeroCalificaciones) {
    int reprobados = 0;
    for (int i = 0; i < numeroCalificaciones; i++) {
        if (calificaciones[i] < 60) {
        reprobados++;
        }
    }
    return reprobados;
}

int main() {
    int numeroCalificaciones;
    double* calificaciones;
    double promedio;
    double mejorCalificacion;
    int numeroReprobados;

    cout << "Ingrese el número de calificaciones: ";
    cin >> numeroCalificaciones;

    calificaciones = new double[numeroCalificaciones];

    capturarCalificaciones(calificaciones, numeroCalificaciones);

    promedio = calcularPromedio(calificaciones, numeroCalificaciones);

    mejorCalificacion = encontrarMejorCalificacion(calificaciones, numeroCalificaciones);

    numeroReprobados = contarReprobados(calificaciones, numeroCalificaciones);

    cout << endl << "Promedio: " << promedio << endl;
    cout << "Mejor calificación: " << mejorCalificacion << endl;
    cout << "Número de reprobados: " << numeroReprobados << endl;

    return 0;
}