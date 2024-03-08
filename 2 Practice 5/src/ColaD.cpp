#include "../headers/ColaD.h"

#define n 20

ColaD::ColaD() {
    this->front = nullptr;
    this->rear = nullptr;

}

void ColaD::enqueue(int value) {
    Node *newnode = new Node(value);
    if(empty() == true) {

    }
    else {
        cout << "Queue is full" << endl;
    }
}

void ColaD::dequeue() { 
    if(empty() == false) {

    }
    else {
        cout << "Queue is empty" << endl;
    }
}

bool ColaD::empty() {
    return (this->front == nullptr);
}

ColaD::~ColaD() {

}