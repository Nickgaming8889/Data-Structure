#include "../header/files.h"

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