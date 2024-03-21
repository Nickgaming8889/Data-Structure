#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
    private:

    public:
        //Attributes...
        int *data;
        string name;
        string section;
        Node *next;

        //Methods...
        Node();
        Node(int, string, string);
        ~Node();

        void setData(int*);
        int* getData(void);
};

#endif