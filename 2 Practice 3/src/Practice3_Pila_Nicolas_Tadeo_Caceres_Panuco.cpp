#include "../headers/Pila.hpp"

int main(int argc, char const *argv[]) {
    int op, op1, valor;
    Pila p;

    do {
        //system("clear");
        cout << "Menu." << endl;
        cout << "1. Push." << endl;
        cout << "2. Pop." << endl;
        cout << "3. View." << endl;
        cout << "4. Exit." << endl;

        cout << "Select an option: ";
        cin >> op;

        switch (op) {
        case 1:
            cout << "Introduce the value: ";
            cin >> valor;
            p.push(valor);
        break;
        case 2:
            p.pop();
        break;
        case 3:
            cout << "View..." << endl;
            p.viewPila();
        break;
        case 4:
            cout << "Do you want to exit? 2[Y] 1[N] ";
            cin >> op1;
        break;
        default:
        break;
        }

    } while (op1 != 2);

    return 0;
}