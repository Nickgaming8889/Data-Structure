#ifndef LISTD_H
#define LISTD_H

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

class ListD {
    private:
        class Node {
            int *id;
            string *data;
            Node *next;

            Node(int value, string name) {
                *id = value;
                *data = name;
                next = nullptr;
            }

            Node *front;
            Node *rear;
        };
    public:
        ListD();
        void addNode(int*, string*);
        void subNode();
        void search();
        void searchName();
        void modify();
        ~ListD();
};

#endif