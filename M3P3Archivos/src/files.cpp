#include "../header/files.h"

File::File(){

}

void File::writeFile() {
    ofstream file;
    file.open("file.txt", ios::out);

    file << "ID" << endl;
    file << "1" << endl;
    file << "Nombre" << endl;
    file << "Maria" << endl;

    file.close();
}

void File::readFile() {
    fstream file;
    string data;

    file.open("file.txt", ios::in);
    file >> data;

    while(!file.eof()) {
        cout << data << endl;
        file >> data;
    }

    file.close();
}

File::~File() {

}