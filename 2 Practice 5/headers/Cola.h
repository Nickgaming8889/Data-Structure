#ifndef COLA_H
#define COLA_H

class Cola {
    private:
        //Attributes...
        int front;
        int rear;

    public:
        Cola(/* args */);
        void push();
        void pop();
        void viewQueue(); 
        ~Cola();
};

#endif