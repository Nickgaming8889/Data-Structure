#ifndef COLAD_H
#define COLAD_H

#include <iostream>
using namespace std;

class ColaD {
    private:
        //Attributes...
        class Node {
        public:
        int data;
        Node *next;

            Node(int value) {
                data = value;
                next = nullptr;
            }
        };
        
        Node* front;
        Node* rear;

    public:
        //Methods...
        ColaD();
        void enqueue(int);
        void dequeue();
        bool empty();
        void viewQueue();
        ~ColaD();
};

#endif