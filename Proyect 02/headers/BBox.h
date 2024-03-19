#ifndef BBOX_H
#define BBOX_H

#include <iostream>
#include "Node.h"

using namespace std;

class BBox {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        BBox();
        ~BBox();
};

#endif