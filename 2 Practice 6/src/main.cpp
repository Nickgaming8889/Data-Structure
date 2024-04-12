#include "../headers/ListD.hpp"

int validation(int);

int main(int argc, char const *argv[]) {
    ListaContactos* p= new ListaContactos;
    int op, op1, ip; string n, nn;

    do {
        cout << "Menu..." << endl;
        cout << "1. Add Contact." << endl;
        cout << "2. Delete Contact." << endl;
        cout << "3. Ordenar." << endl;
        cout << "4. Find Contact." << endl;
        cout << "5. Modify." << endl;
        cout << "6. Vaciar." << endl;
        cout << "7. Mostrar." << endl;
        cout << "8. Exit." << endl;

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
                    p->ordenarAlfabeticamente();
                break;
            case 4:
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
            case 5:
                    cout << "Modify Data..." << endl;
                    cout << "Actual Name: ";
                    cin >> n;
                    cout << "New Name: ";
                    cin >> nn;
                    cout << "New ID: ";
                    cin >> ip;

                    p->modificarContacto(n, nn, ip);

                break;
            case 6:
                    p->vaciarLista();
                break;
            case 7:
                    p->mostrarContactos();
                break;
            default:

                break;
        }

    } while(op != 8);
    
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