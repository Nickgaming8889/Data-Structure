#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class Node {
    public:
        int number;
        Node *next;
        Node *back;
};

class CircularList{
    private:
        Node *ptrHead;
    public:
        CircularList();
        void insert_First(int);
        void insert_Last(int);
        bool empty();
        void print();
        void sortAscending();
        void sortDescending();
        void modifyNode(int, int);
        void searchByPosition(int);
        void removeNodeByPosition(int);
        void moveTo(int);
};

CircularList::CircularList() {
    ptrHead = NULL;
}

void CircularList::insert_First(int number) {
    Node *new_node = new Node();
    new_node->number = number;
    if (ptrHead == NULL) {
        new_node->next = new_node;
        new_node->back = new_node;
        ptrHead = new_node;
    }
    else {
        Node *last_node = ptrHead->back;
        new_node->next = ptrHead;
        new_node->back = last_node;
        ptrHead->back = new_node;
        last_node->next = new_node;
        ptrHead = new_node;
    }
}

void CircularList::insert_Last(int number) {
    Node *new_node = new Node();
    new_node->number = number;
    if (ptrHead == NULL) {
        new_node->next = new_node;
        new_node->back = new_node;
        ptrHead = new_node;
    }
    else {
        Node *last_node = ptrHead->back;
        new_node->next = ptrHead;
        new_node->back = last_node;
        ptrHead->back = new_node;
        last_node->next = new_node;
    }
}

bool CircularList::empty() {
    if (ptrHead == NULL)
        return true;
    else
        return false; 
}

void CircularList::print() {
    if (!empty()) {
        Node *temp = ptrHead;
        do {
            cout<<temp->number <<"-";
            temp = temp->next;
        } while (temp != ptrHead);
        cout << "\n";
    }
}

void CircularList::moveTo(int opc) { 
    int i=0;
    
    if (!empty()) {
        Node *temp = ptrHead;
        if(opc==1){
            cout<<"[ "<<temp->number <<" ]"<<endl;
            temp = temp->next;
            ptrHead=temp;
        }
        else if(opc==2) {
            cout<<"[ "<<temp->number <<" ]"<<endl;
            temp = temp->back;
            ptrHead=temp;
        }
    }
}

void CircularList::sortAscending() {
    if (!empty()) {
        Node *current = ptrHead;
        Node *index = nullptr;
        int temp;

        do {
            index = current->next;

            while (index != ptrHead) {
                if (current->number > index->number) {
                    temp = current->number;
                    current->number = index->number;
                    index->number = temp;
                }

                index = index->next;
            }

            current = current->next;
        } while (current != ptrHead);
    }
}

void CircularList::sortDescending() {
    if (!empty()) {
        Node *current = ptrHead;
        Node *index = nullptr;
        int temp;

        do {
            index = current->next;

            while (index != ptrHead) {
                if (current->number < index->number) {
                    temp = current->number;
                    current->number = index->number;
                    index->number = temp;
                }

                index = index->next;
            }

            current = current->next;
        } while (current != ptrHead);
    }
}

void CircularList::modifyNode(int position, int newValue) {
    if (!empty()) {
        Node *temp = ptrHead;
        int count = 0;

        do {
            if (count == position) {
                temp->number = newValue;
                break;
            }

            temp = temp->next;
            count++;
        } while (temp != ptrHead);
    }
}

void CircularList::searchByPosition(int position) {
    if (!empty()) {
        Node *temp = ptrHead;
        int count = 0;

        do {
            if (count == position) {
                cout << "El nodo en la posición " << position << " contiene el valor: " << temp->number << endl;
                return;
            }

            temp = temp->next;
            count++;
        } while (temp != ptrHead);

        cout << "No se encontró ningún nodo en la posición " << position << endl;
    }
}

void CircularList::removeNodeByPosition(int position) {
    if (!empty()) {
        Node *temp = ptrHead;
        Node *prev = nullptr;
        int count = 0;

        if (position == 0) {
            if (temp->next == temp) {
                delete temp;
                ptrHead = nullptr;
                return;
            } else {
                Node *lastNode = ptrHead->back;
                ptrHead = ptrHead->next;
                lastNode->next = ptrHead;
                ptrHead->back = lastNode;
                delete temp;
                return;
            }
        }

        do {
            if (count == position) {
                prev->next = temp->next;
                temp->next->back = prev;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
            count++;
        } while (temp != ptrHead && count <= position);

        cout << "La posición especificada no existe en la lista." << endl;
    }
}

int validation(int op_) {
    bool valid = false;
    
    do {
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... " << endl;
            }
        }while(!valid);

    return op_;
}

int main(int argc, char** argv) {
    int opc=0, x, pos;
    CircularList *obj = new CircularList();
    
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Insert at Beginning."<<endl;
        cout<<"2. Insert at End."<<endl;
        cout<<"3. Search by Position."<<endl;
        cout<<"4. Modify."<<endl;
        cout<<"5. Remove."<<endl;
        cout<<"6. Sort Ascending."<<endl;
        cout<<"7. Sort Descending."<<endl;
        cout<<"8. Print."<<endl;
        cout<<"9. Exit."<<endl;

        cout<<"Select an option: ";
        cin>>opc;

        validation(opc);
    
        switch(opc){
            case 1: 
                    cout<<"Insert Beginning."<<endl;
                    cout<<"Introduce a number: ";
                    cin >> x;

                    validation(x);

                    obj->insert_First(x);
                break;
            case 2: 
                    cout<<"Insert End."<<endl;
                    cout<<"Introduce a number: ";
                    cin >> x;

                    validation(x);

                    obj->insert_Last(x);
                break;
            case 3: 
                    cout<<"Search by Position."<<endl;
                    cout<<"Which position do you want to see? ";
                    cin >> x;

                    validation(x);

                    obj->searchByPosition(x);
                break;
            case 4: 
                    cout<<"Modify."<<endl;
                    cout<<"Introduce the Position: ";
                    cin >> pos;

                    validation(pos);
                    cout<<"Introduce the new number: ";
                    cin >> x;

                    validation(x);

                    obj->modifyNode(pos, x);
                break;
            case 5: 
                    cout<<"Introduce the Position: ";
                    cin >> pos;

                    validation(pos);

                    obj->removeNodeByPosition(pos);
                break;
            case 6: 
                    obj->sortAscending();
                break;
            case 7: 
                    obj->sortDescending();
                break;
            case 8:
                    obj->print();
                break;
            default:

                break;
        }
    
    }while(opc != 9);
    
    return 0;
}