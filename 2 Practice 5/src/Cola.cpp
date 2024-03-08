#include "../headers/Cola.h"

Cola::Cola() {
    front = 0;
    rear = 0;
}

void Cola::enqueue(int value) {
    if(empty()) {
        this->rear++;
        this->arr[this->rear] = value;
    }
    else {
        cout << "Queue is full" << endl;
    }
}

void Cola::dequeue() {
    if(empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        int value = arr[front];
        if(front == rear)
            front = rear = 0;
        else
            front = (front + 1);
    }
}

bool Cola::empty() {
    return (this->front == 0);
}

void Cola::viewQueue() {
    for(int i = front; i <= rear; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;
}

Cola::~Cola() {

}