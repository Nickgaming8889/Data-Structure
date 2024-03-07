#include "../headers/PilaD.h"

PilaD::PilaD() {
    max = 10;
    arr = new int(max);
    top = 0;
}

//Push...
void PilaD::push(int *value) {
    if(empty() == true) {
        arr[top] = *value;
        top++;
    }
    /*else if(top == max) {
        max *= 2;
        int *t = new int(max);

        for(int i = 0; i < top; i++) {
            t[i] = arr[i];
        }
    }*/
    else
        cout << "The stack is full" << endl;
}

//Pop...
void PilaD::pop() {
    if(empty() == false) {
        arr[top] = 0;
        top--;
    }
    else {
        cout << "The stack is empty" << endl;
    }
}

//View Stack...
void PilaD::viewStack() {
    for(int i = top - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }
    cout << endl;
}

//Empty...
bool PilaD::empty() {
    return(top == 0);
}

PilaD::~PilaD() {

}