#include <iostream>

using namespace std;

int Bin(int numeroDecimal, int *ptrBinario) {
  for (int i = 7; i >= 0; i--) {
    ptrBinario[i] = numeroDecimal % 2;
    numeroDecimal /= 2;
  }
  return 0;
}

int main() {
  int numeroDecimal;

  cout << "Introduzca un número decimal: ";
  cin >> numeroDecimal;

  int ptrBinario[8]; 

  Bin(numeroDecimal, ptrBinario);

  cout << "El número binario es: ";
  for (int i = 0; i < 8; i++) {
    cout << ptrBinario[i];
  }

  cout << endl;

  return 0;
}