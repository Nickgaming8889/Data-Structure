#include <iostream>
#include "../headers/PilaD.h"

int main(int argc, char const *argv[]) {
    PilaD p;
    int op, value_;
    int *ptr;

    do {
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
                cin >> value_;
                ptr = &value_;

                p.push(ptr);
            break;
        case 2:
                p.pop();
            break;
        case 3:
                cout << "View..." << endl;
                p.viewStack();
            break;
        default:

            break;
        }
    }while(op != 4);

    return 0;
}