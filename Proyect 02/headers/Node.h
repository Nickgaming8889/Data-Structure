#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
    private:
        //Attributes...
        int *data;
        Node *next;

    public:
        Node();
        Node(int);
        ~Node();

        void setData(int*);
        int* getData(void);
};

#endif