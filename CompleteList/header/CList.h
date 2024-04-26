#ifndef CLIST_H
#define CLIST_H

#include "iostream"
using namespace std;

class User {
    private:
        //Attributes...
        string* name;
        int* id;
    public:
        //Methods...
        User();
        void showUsers();
        ~User();

        //Getters & Setters...
        string getName();
        void setName(string&);
        int getID();
        void setID(int&);
};

class Node : public User {
    private:
        //Attributes...
        User *user;
        Node *next;

    public:
        //Methods...
        Node() {
            
        }
};

class CList : public Node {
    private:
        //Attributes...
        Node *head;
        Node *rear;

    public:
        //Methods...
        CList();
        Node* search(int&);
        Node* searchName(string&);
        void push(string&, int&);
        void pop(int);
        bool empty();
        ~CList();
};

#endif