#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <conio.h>
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
        void enqueue(int*, string);
        void dequeue();
        bool empty();
        void viewGeneral();
        ~General();
};

#endif