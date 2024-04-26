#include "../header/files.h"
#include <cstdlib>
#include <math.h>

int validation(int op_);

int main() {
    int op, op1;
    File f;

    do {
        cout << "Menu." << endl;
        cout << "1. Write File." << endl;
        cout << "2. Read File." << endl;
        cout << "3. Exit." << endl;

        cout << "Select option: ";
        cin >> op;
        validation(op);

        switch (op) {
        case 1:
            f.writeFile();
            break;
        case 2:
            f.readFile();
            break;
        default:

            break;
        }
    } while (op != 3);
    
}

int validation(int op_) {
    bool valid = false;
    
    do {
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... " << endl;
            }
        }while(!valid);

    return op_;
}