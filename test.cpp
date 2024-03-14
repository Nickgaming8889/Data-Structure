#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
template <typename T>
class Node {
    public:
        T id;
        T name;
        Node();
        Node(T, T);
        ~Node();
        Node *next;
        void print_node();
        };

        template <typename T>
        
        Node<T>::Node() {
            id = NULL;
            name = NULL;
            next = NULL; }
        
        template <typename T>
        
        Node<T>::Node(T id_, T name_) {
            id = id_;
            name = name_;
            next = NULL; 
        }
        
        template <typename T>
        
        void Node<T>::print_node() {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl; 
        }

        template <typename T>
        
        Node<T>::~Node() {}
        
        template <class T>

class List {
    private:
        Node<T> *ptrHead;
        public:
        List();
        ~List();
        void add_sort(T, T);
        void print_list();
        void search_Id(T);
};

template <typename T>

List<T>::List() {
    ptrHead = NULL;
}

template <typename T>

List<T>::~List() {}

template <typename T>

void List<T>::add_sort(T id_, T name_) {
    Node<T> *new_node = new Node<T>(id_, name_);
    Node<T> *temp = ptrHead;
    if (!ptrHead)
        ptrHead = new_node;
    else {
        if (ptrHead->id == id_){
        new_node->next = ptrHead;
        ptrHead = new_node;
        }
        else {
            while (temp->next != NULL){ temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
}

template <typename T>

void List<T>::search_Id(T id_) {
    Node<T> *temp = ptrHead;
    bool flag=false;
    while (temp) {
        if(temp->id == id_){
            cout <<"ID: "<<temp->id<< endl <<"Name: "<<temp->name << endl;
            flag=true;
        }
        temp = temp->next;
    }
    if(flag== false) cout << "Does not exist'\n";

}

template <typename T>

void List<T>::print_list() {
    Node<T> *temp = ptrHead;
    if (!ptrHead)
        cout << "Empty List"<< endl;
    else{
        while (temp) {
        temp->print_node();
        cout << endl;
        temp = temp->next;
        }
    }
}

int main() {

List<string> dinamyc_list;
int opc2,opc1;
string id_, name_, address_, phone_;

do {
    cout << "M E N U " << endl << endl;
    cout << "1-.Add Contact " << endl;
    cout << "2-.Search Contact" << endl;
    cout << "3-.Exit" << endl;
    
    cout << "Select option: ";
    cin >> opc1;

    switch (opc1){
    case 1:
            cout<<"Enter your ID\n";
            cin >>id_;
            cout<<" Enter your Name\n";
            cin >>name_;
            dinamyc_list.add_sort(id_,name_);
        break;
    case 2:
            cout << "Enter your Id : ";
            cin >> id_;
            dinamyc_list.search_Id(id_);
        break;

    case 3:
            dinamyc_list.print_list();
        break;
    default:
            cout << "Warning" << endl;
    }
    
    cout << "Continue 1 si 2 no ";
    cin >> opc2;
    }while (opc2 != 3);

    return 0;
}