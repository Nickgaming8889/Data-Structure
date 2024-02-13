#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void hex(int, string&);

int main(int argc, char const *argv[]) {
    string Hex;
    int decimal;

    cout << "Dame un numero decimal: ";
    cin >> decimal;

    hex(decimal, Hex);

    return 0;
}

void hex(int numeroDecimal, string &ptrHex) {
    ptrHex = " ";
    while(numeroDecimal > 0) {
        ptrHex += "0123456789ABCDEF"[numeroDecimal%16];
        numeroDecimal /= 16;
    }

    reverse(ptrHex.begin(), ptrHex.end());

    cout << ptrHex;
}