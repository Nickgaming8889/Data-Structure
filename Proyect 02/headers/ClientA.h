#ifndef CLIENTA_H
#define CLIENTA_H

#include <iostream>
#include "Node.h"
#include "General.h"

using namespace std;

class ClientA: public General {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        ClientA();
        void enqueue(int*, string*, string*);
        void dequeue();
        bool empty();
        void viewClientA();
        ~ClientA();
};

#endif