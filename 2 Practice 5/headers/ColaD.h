#ifndef COLAD_H
#define COLAD_H

#include <iostream>
using namespace std;

class ColaD {
    
    class Node {
        int data;
        Node *next;

        public:
            Node(int value) {
                data = value;
                next = nullptr;
            }
    };
    
    private:
        //Attributes...
        Node *front, *rear;

    public:
        //Methods...
        ColaD();
        void enqueue(int);
        void dequeue();
        bool empty();
        ~ColaD();
};

#endif