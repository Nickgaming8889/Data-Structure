#include <iostream>
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

int main(int argc, char** argv) {
    int opc=0,opc2=0;
    CircularList *obj = new CircularList();
    obj->insert_First(1);
    obj->insert_First(2);
    obj->insert_First(3);
    obj->insert_Last(4);
    cout<<"Nodos Insertados\n";
    obj->print();
    cout<<endl;
    do{ system("cls");
    obj->print();
    cout<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. move to right"<<endl;
    cout<<"2. move to left"<<endl;
    cin>>opc;

    switch(opc){
        case 1: 
                obj->moveTo(1);
            break;
        case 2: 
                obj->moveTo(2)
            ;break;
    }
    
    cout<<"Continuar 1 si 2 no";
    cin>>opc2;
    
    }while(opc2!=2);
    
    //delete obj;
    return 0;
}