#include <cstdlib>
#include <math.h>
#include "../headers/Cola.h"

int validation(int);

int main(int argc, char const *argv[]) {
    Cola* p = new Cola();
    int op, v;

    do {
        cout << "\nMain Menu." << endl;
        cout << "1. Enqueue." << endl;
        cout << "2. Dequeue." << endl;
        cout << "3. View." << endl;
        cout << "4. Exit." << endl; 

        cout << "Select an option: ";
        cin >> op;
        validation(op);

        switch(op) {
            case 1:
                    cout << "Introduce a number: ";
                    cin >> v;
                    validation(v);

                    p->enqueue(v);

                break;
            case 2:
                    cout << "Dequeue..." << endl;
                    p->dequeue();
                break;
            case 3:
                    cout << "View Queue..." << endl;
                    p->viewQueue();
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