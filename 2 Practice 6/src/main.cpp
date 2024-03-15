#include "../headers/ListD.h"

int validation(int);

int main(int argc, char const *argv[]) {
    ListD *p = new ListD();
    int op, ip; string n;

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
                    int *ip_ = &ip;
                    cout << "Name Contact: ";
                    cin >> n;
                    string *n_ = &n;
                    p->addNode(ip_, n_);
                break;
            case 2:
                    cout << "Contact Delete" << endl;
                    p->subNode();
                break;
            case 3:
                    

                break;
            case 4:

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