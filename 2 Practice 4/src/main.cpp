#include <iostream>
#include <math.h>
#include <cstdlib>
#include "../headers/PilaD.h"

int validation(int);

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
        validation(op);

        switch (op) {
        case 1:
                cout << "Introduce the value: ";
                cin >> value_;
                validation(value_);
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