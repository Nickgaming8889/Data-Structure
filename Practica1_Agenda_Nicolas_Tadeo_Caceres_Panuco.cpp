#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Agenda{
    int id;
    char nombre[90];
    char telefono[50];
    char direction[100];
}reg[10];

int index1 = 0, id = 1, position = 0;

int Menu() {
    int op;

    cout << "Menu Main" << endl;
    cout << "1. Registro Contacto" << endl;
    cout << "2. Buscar Contacto" << endl;
    cout << "3. Editar Contacto" << endl;
    cout << "4. Remover Contacto" << endl;
    cout << "5. Lista Contacto" << endl;
    cout << "6. Salir" << endl;

    cout << "Seleccione una opcion: " << endl;
    cin >> op;

    return op;
}

void Registar() {
    reg[index1].id = id ++;

    cout << "Ingrese el nombre" << endl;
    cin >> reg[index1].nombre;
    cout << "Ingrese telefono" << endl;
    cin >> reg[index1].telefono;
    cout << "Ingrese direccion" << endl;
    cin >> reg[index1].direction;

    index1++;
}

bool Buscar(int id) {
    int x = 0;
    bool ban = false;

    while (x < 10 && ban == false) {
        if (reg[x].id == id) {
            position = x;
            ban = true;
        }
        x++;
    }

    return ban;
}

bool nameSearch(char nombre[90]) {
    int x = 0;
    bool ban = false;

    while (x < 10 && ban == false) {
        if (strcmp(reg[x].nombre, nombre) == 0) {
            position = x;
            ban = true;
        }
        x++;
    }
    
    return ban;
}

void Edit(int position) {
    int op;
    do {
        cout << "Que deseas modificar?" << endl;
        cout << "1. Nombre" << endl;
        cout << "2. Telefono" << endl;
        cout << "3. Direccion" << endl;
        cout << "4. Salir" << endl;

        cout << "Seleccione la opcion: " << endl;
        cin >> op;

        switch (op) {
        case 1:
                cout << "Ingrese el nuevo nombre: " << endl;
                cin >> reg[position].nombre;
            break;
        case 2:
                cout << "Ingrese el nuevo telefono: " << endl;
                cin >> reg[position].telefono;
            break;
        case 3:
                cout << "Ingrese la nueva direccion: " << endl;
                cin >> reg[position].direction;
            break;
        default:
            break;
        }

    }while (op != 4);
}

void Detele(int position) {
    for (int i = position; i < index1 - 1; i++) {
        reg[i] = reg[i + 1];
    }

    index1--;

    if (index1 == 0 || reg[position].id > id) {
        id = 0;
    }
    else {
        id = reg[position].id + 1;
    }

    cout << "Eliminacion completa" << endl;

    for (int j = 0; j < index1; j++) {
        if (j < index1) {
            reg[j].id--;
        }
        else {
            reg[j].id = reg[j - 1].id;
        }
    }
}

void List() {
    int position;

    for (position = 0; position < index1; ++position) {
        cout << "id: " << reg[position].id << endl;
        cout << "Nombre: " << reg[position].nombre << endl;
        cout << "Telefono: " << reg[position].telefono << endl;
        cout << "Direccion: " << reg[position].direction << endl;
    }
}

void Mostrar(int position) {
    cout << "id: " << reg[position].id << endl;
    cout << "Nombre: " << reg[position].nombre << endl;
    cout << "Telefono: " << reg[position].telefono << endl;
    cout << "Direccion: " << reg[position].direction << endl;
}

int main(int argc, char const *argv[])
{
    int op_ = 0, id_ = 0, op2_ = 0;

    do {
        system("clear");
        op_ = Menu();
        switch (op_) {
        case 1:
                Registar();
            break;
        case 2: {
                int op3_;
                cout << "Porque desea buscar? " << endl;
                cout << "1.Id" << endl;
                cout << "2.Nombre" << endl;

                cout << "Seleccione la opcion: " << endl;
                cin >> op3_;  
                switch (op3_) {
                case 1:
                        cout << "Ingrese el Id: " << endl;
                        cin >> id_;
                        if (Buscar(id_)) {
                        Mostrar(position);
                        }
                        else 
                        cout << "No existe el registro" << endl;
                    break;
                case 2: 
                        char nombre_[90];
                        cout << "Ingrese el nombre: " << endl;
                        cin >> nombre_;
                        if (nameSearch(nombre_)) {
                            Mostrar(position);
                        }
                        
                    break;
                default:
                    break;
                }
        }   break;
        case 3:
                cout << "Ingrese el Id a modificar: " << endl;
                cin >> id_;
                if (Buscar(id_)) {
                    Edit(position);
                }
                else
                    cout << "No existe el registro" << endl;
            break;
        case 4:
                cout << "Que registro quieres eliminar" << endl;
                cin >> id_;
                if (Buscar(id_)) {
                    Detele(position);
                }
                else
                    cout << "Registro inexistente" << endl;
            break;
        case 5:
            List();
            break;
        }
        cout << "Continuar 1[Si] 6[No]" << endl;
        cin >> op2_;
    } while (op2_ != 6);

    system("pause>>clear");

    return 0;
}