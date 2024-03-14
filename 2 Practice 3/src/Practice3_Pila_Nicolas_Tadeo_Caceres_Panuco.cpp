#include "../headers/Pila.hpp"

int validation(int);

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
        validation(op);

        switch (op) {
        case 1:
            cout << "Introduce the value: ";
            cin >> valor;
            validation(valor);

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
            validation(op1);
        break;
        default:
        break;
        }

    } while (op1 != 2);

    return 0;
}

int validation(int op_) {
    bool valid = false;
    
    do {
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... ";
            }
        }while(!valid);

    return op_;
}