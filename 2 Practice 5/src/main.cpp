#include <cstdlib>
#include <math.h>
#include "../headers/ColaD.h"

int validation(int);

int main(int argc, char const *argv[]) {
    int op;

    do {
        cout << "Main Menu." << endl;
        cout << "1. Enqueue." << endl;
        cout << "2. Dequeue." << endl;
        cout << "3. Empty." << endl;
        cout << "4. Exit." << endl; 

        cout << "Select an option: ";
        cin >> op;
        validation(op);

        switch(op) {
            case 1:
                    
                break;
            case 2:

                break;
            case 3:

                break;
            default:

                break;
        }

    } while (op != 4);

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