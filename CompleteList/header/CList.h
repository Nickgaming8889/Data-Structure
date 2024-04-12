#ifndef CLIST_H
#define CLIST_H

#include "iostream"
using namespace std;

class User {
    private:
        //Attributes...
        string name;
        string email;
        int id;
    public:
        //Methods...
        User();
        ~User();

        //Getters & Setters...
        string getName();
        void setName(string);
        string getEmail();
        void setEmail(string);
        int getID();
        void setID(int);
};

class Node : public User {
    private:
        //Attributes...
        User *user;
        Node *front;
        Node *rear;

    public:
        //Methods...
};

class CList : public Node {
    private:
        //Attributes...
        Node *head;

    public:
        //Methods...
        CList();
        ~CList();
};

#endif