#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
#include "Node.h"

using namespace std;

class General: public Node {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        General();
        void testing();
        ~General();
};

#endif