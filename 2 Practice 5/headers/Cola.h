#ifndef COLA_H
#define COLA_H

#include <iostream>
using namespace std;

class Cola {
    private:
        //Attributes...
        int arr[10];
        int front;
        int rear;

    public:
        Cola();
        void enqueue(int);
        void dequeue();
        bool empty();
        void viewQueue(); 
        ~Cola();
};

#endif