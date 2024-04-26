#include "../header/Agenda.h"

void Agenda::addContact(const string& name, const string& phoneNumber) {
        Contact* newContact = new Contact(name, phoneNumber);
        if (!head) {
            head = newContact;
        } else {
            Contact* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newContact;
        }
    }

void Agenda::saveToFile() {
    ofstream file("agenda.txt");
    if (file.is_open()) {
        Contact* temp = head;
        while (temp) {
            file << temp->name << "," << temp->phoneNumber << endl;
            temp = temp->next;
        }
        file.close();
        cout << "Agenda guardada en " << "agenda.txt" << endl;
    } else {
        cerr << "No se pudo abrir el archivo " << "agenda.txt" << endl;
    }
}

void Agenda::loadFromFile() {
    ifstream file("agenda.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            size_t pos = line.find(",");
            if (pos != string::npos) {
                string name = line.substr(0, pos);
                string phoneNumber = line.substr(pos + 1);
                addContact(name, phoneNumber);
            }
        }
        file.close();
        cout << "Agenda cargada desde " << "agenda.txt" << endl;
    } else {
        cerr << "No se pudo abrir el archivo " << "agenda.txt" << endl;
    }
}

void Agenda::printContacts() {
    if (!head) {
        cout << "La agenda está vacía." << endl;
    } else {
        Contact* temp = head;
        cout << "Contactos en la agenda:" << endl;
        while (temp) {
            cout << temp->name << ": " << temp->phoneNumber << endl;
            temp = temp->next;
        }
    }
}

void Agenda::modifyContact(const string& nameToModify, const string& newPhoneNumber) {
    Contact* temp = head;
    while (temp) {
        if (temp->name == nameToModify) {
            temp->phoneNumber = newPhoneNumber;
            cout << "Contacto '" << nameToModify << "' modificado." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "El contacto '" << nameToModify << "' no se encontró en la agenda." << endl;
}

void Agenda::removeContact(const string& nameToRemove) {
    Contact* prev = nullptr;
    Contact* temp = head;

    while (temp) {
        if (temp->name == nameToRemove) {
            if (prev) {
                prev->next = temp->next;
            } else {
                head = temp->next;
            }
            delete temp;
            cout << "Contacto '" << nameToRemove << "' eliminado de la agenda." << endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "El contacto '" << nameToRemove << "' no se encontró en la agenda." << endl;
}

Agenda::~Agenda() {
    Contact* temp = head;
    while (temp) {
        Contact* next = temp->next;
        delete temp;
        temp = next;
    }
    head = nullptr;
}