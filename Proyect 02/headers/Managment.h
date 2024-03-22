#ifndef MANAGMENT_H
#define MANAGMENT_H

#include <iostream>
#include "Node.h"
#include "General.h"

using namespace std;

class Managment: public General {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        Managment();
        void enqueue(int*, string*, string*);
        void dequeue();
        bool empty();
        void viewManagment();
        ~Managment();

};

#endif