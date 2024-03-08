#include "../headers/PilaD.h"

PilaD::PilaD() {
    max = 10;
    arr = new int(max);
    top = 0;
}

//Push...
void PilaD::push(int *value) {
     if (empty()) {
            minEle = *value;
            arr[top] = *value;
            top++;
        }
        // If array is full
        else if (top == max) {
            max *= 2;
            int* temp = new int(max);
            for (int i = 0; i < top; i++) {
                temp[i] = arr[i];
            }
 
            // If x is less than minEle
            if (*value < minEle) {
                temp[top] = 2 * *value - minEle;
 
                minEle = *value;
 
                top++;
            }
            else {
                temp[top] = *value;
                top++;
            }

            arr = temp;
        }
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