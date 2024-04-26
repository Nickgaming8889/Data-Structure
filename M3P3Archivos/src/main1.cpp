#include "../header/Agenda.h"

int main() {
    string fileName = "agenda.txt";
    Agenda agenda(fileName);

    // Cargar contactos desde el archivo
    agenda.loadFromFile();

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Modificar contacto\n";
        cout << "3. Eliminar contacto\n";
        cout << "4. Guardar agenda\n";
        cout << "5. Mostrar contactos\n";
        cout << "6. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, phoneNumber;
                cout << "Nombre del contacto: ";
                cin >> name;
                cout << "Número de teléfono: ";
                cin >> phoneNumber;
                agenda.addContact(name, phoneNumber);
                break;
            }
            case 2: {
                string nameToModify, newPhoneNumber;
                cout << "Nombre del contacto a modificar: ";
                cin >> nameToModify;
                cout << "Nuevo número de teléfono: ";
                cin >> newPhoneNumber;
                agenda.modifyContact(nameToModify, newPhoneNumber);
                break;
            }
            case 3: {
                string nameToRemove;
                cout << "Nombre del contacto a eliminar: ";
                cin >> nameToRemove;
                agenda.removeContact(nameToRemove);
                break;
            }
            case 4:
                agenda.saveToFile();
                break;
            case 5:
                agenda.printContacts();
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, intente de nuevo." << endl;
        }
    } while (choice != 6);

    return 0;
}