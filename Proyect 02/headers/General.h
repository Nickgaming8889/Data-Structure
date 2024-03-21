#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
#include <fstream>
#include <ctime>
//#include <conio.h>
#include "Node.h"
#include "ClientA.h"
#include "Managment.h"
#include "BBox.h"

using namespace std;

class General: public Node {
    private:
        //Attributes...
        Node* front;
        Node* rear;

    public:
        //Methods...
        General();
        void enqueue(int*, string, string);
        void dequeue();
        void moveQueue(General*);
        bool empty();
        void viewGeneral();
        ~General();
};

#endif