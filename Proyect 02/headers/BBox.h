#ifndef BBOX_H
#define BBOX_H

#include <iostream>
#include "Node.h"
#include "General.h"

using namespace std;

class BBox: public General {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        BBox();
        void enqueue(int*, string);
        void dequeue();
        bool empty();
        void viewBBox();
        ~BBox();
};

#endif