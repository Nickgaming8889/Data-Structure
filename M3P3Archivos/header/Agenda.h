#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Contact {
    public:
        string name;
        string phoneNumber;
        Contact* next;

        Contact(const string& name, const string& phoneNumber) : name(name), phoneNumber(phoneNumber), next(nullptr) {}
};

class Agenda {
    private:
        Contact* head;
        string fileName;

    public:
        Agenda(const string& fileName) : head(nullptr), fileName(fileName) {}
        void addContact(const string&, const string&);
        void saveToFile();
        void loadFromFile();
        void printContacts();
        void modifyContact(const string&, const string&);
        void removeContact(const string&);
        ~Agenda();
};