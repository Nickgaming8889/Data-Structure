#include "../headers/Cola.h"

#define MAX_SIZE 10

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
        if (front == rear) {
        front = rear = 0;
        } else {
        front = (front) % MAX_SIZE; 
        }
    }
}

bool Cola::empty() {
    return (this->front == 0);
}

void Cola::viewQueue() {
    for(int i = front + 1; i <= rear; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;
}

Cola::~Cola() {

}