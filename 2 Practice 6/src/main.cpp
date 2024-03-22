#include "../headers/ListD.hpp"

int validation(int);

int main(int argc, char const *argv[]) {
    ListaContactos* p= new ListaContactos;
    int op, op1, ip; string n, nn;

    do {
        cout << "Menu..." << endl;
        cout << "1. Add Contact." << endl;
        cout << "2. Delete Contact." << endl;
        cout << "3. Find Contact." << endl;
        cout << "4. Modify." << endl;
        cout << "5. Exit" << endl;

        cout << "Select an Option: ";
        cin >> op;
        validation(op);

        switch(op) {
            case 1:
                    cout << "ID Contact: ";
                    cin >> ip;
                    cout << "Name Contact: ";
                    cin >> n;
                    
                    p->agregarContacto(n, ip);

                break;
            case 2:
                    cout << "Contact Delete" << endl;
                    cout << "Give me the name: ";
                    cin >> n;
                    p->eliminarContacto(n);
                break;
            case 3:
                    cout << "1. By Name." << endl;
                    cout << "2. By ID." << endl;

                    cout << "Select an Option: ";
                    cin >> op1;
                    validation(op1);

                    switch(op1) {
                        case 1:
                                cout << "Enter the Name: ";
                                cin >> n;
                                p->buscarContactoPorNombre(n);
                            break;
                        case 2:
                                cout << "Enter the ID: ";
                                cin >> ip;

                                p->buscarContactoPorID(ip);

                            break;
                        default:

                            break;
                    }
                break;
            case 4:
                    cout << "Modify Data..." << endl;
                    cout << "Actual Name: ";
                    cin >> n;
                    cout << "New Name: ";
                    cin >> nn;
                    cout << "New ID: ";
                    cin >> ip;

                    p->modificarContacto(n, nn, ip);

                break;
            default:

                break;
        }

    } while(op != 5);
    
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