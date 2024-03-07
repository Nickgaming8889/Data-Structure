#ifndef PILAD_H
#define PILAD_H

#include <iostream>
using namespace std;

class PilaD {
    private:
        //Attributes...
        int max, minEle = 0;
        int *arr;
        int top;
        
    public:
        //Methods...
        PilaD(/* args */);
        void push(int*);
        void pop();
        void viewStack();
        bool empty();
        ~PilaD();
};

#endif