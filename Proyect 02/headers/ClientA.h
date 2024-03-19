#ifndef CLIENTA_H
#define CLIENTA_H

#include "Node.h"
#include <iostream>

using namespace std;

class ClientA {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        ClientA();
        ~ClientA();
};

#endif