#include <iostream>
#include <cstdlib>
using namespace std;

struct Agenda{
    int id;
    char nombre[90];
    char telefono[50];
    char direction[100];
}reg[10];

static int index = 0;
int id = 1, position = 0;

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
    reg[index].id = id ++;

    cout << "Ingrese el nombre" << endl;
    cin >> reg[index].nombre;
    cout << "Ingrese telefono" << endl;
    cin >> reg[index].telefono;
    cout << "Ingrese direccion" << endl;
    cin >> reg[index].direction;

    index++;
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
            cout << "Ingrese el Id: " << endl;
            cin >> id_;
            if (Buscar(id_)) {
                Mostrar(position);
            }
            else 
                cout << "No existe el registro" << endl;
        } break;
        }

        cout << "Continuar 1[Si] 6[No]" << endl;
        cin >> op2_;
    } while (op2_ != 6);

    system("pause>>clear");

    return 0;
}
