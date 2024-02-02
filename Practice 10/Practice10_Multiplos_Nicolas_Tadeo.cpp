#include <iostream>
using namespace std;

int multi(int&, int&);

int main() {
    int op, n = 0, m = 0;
    bool c = true;

    do {

        cout << "Ingrese el limite: ";
        cin >> n;
        cout << "Ingrese el numero: ";
        cin >> m;

        multi(n, m);

        cout << "\nQuiere continuar? Y[1] N[2]: ";
        cin >> op;

        if (op == 1)
            c = true;
        else
            c = false;
    }while(c != false);
}

int multi(int &pn, int &pm) {
    int rlt;
    for (int i = 1; i <= pn ; i++) {
        if (i % pm == 0)
            cout << i << endl;
        else
            cout << "No multiplo" << endl;
    }
    

    return 0;
}