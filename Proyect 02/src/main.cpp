#include "../headers/General.h"
#include "../headers/ClientA.h"
#include "../headers/BBox.h"
#include "../headers/Managment.h"
//#include "../Sources/GotoXY/headers/ownFuntions.h"
#include "../headers/ownFuntions.h"

int main(int argc, char const *argv[]) {
    General* p = new General();
    int random, v, op;
    int ban = 0;
    ifstream file("data.txt");
    string line, name_;

    do {
        cout << "1. General." << endl;
        cout << "2. Atencion Cliente." << endl;
        cout << "3. Gerente." << endl;
        cout << "4. Caja." << endl;

        cout << "Selecciona una opcion: ";
        cin >> op;
        validation(op);

        switch (op) {
        case 1:
                for(int i = 0; i < 3; i++) {
                    cout << "Entra un dato: ";
                    cin >> v >> name_;
                    int* pv = &v;
                    p->enqueue(pv, name_);
                }
            break;
        case 2:
                p->viewGeneral();
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        default:
            break;
        }

    } while (op != 5);
    

    return 0;
}