#ifndef BANK_H
#define BANK_K

#include <iostream>
#include "Node.h"

using namespace std;

class Managment {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        Managment();
        ~Managment();

};

#endif