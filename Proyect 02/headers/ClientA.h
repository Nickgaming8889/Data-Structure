#ifndef CLIENTA_H
#define CLIENTA_H

#include <iostream>
#include "Node.h"
/*#include "General.h"*/

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