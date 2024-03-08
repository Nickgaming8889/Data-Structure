#include "../headers/ColaD.h"

ColaD::ColaD() {
    front = nullptr;
    rear = nullptr;

}

void ColaD::enqueue(int value) {
    Node *newNode = new Node(value);
    if(empty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void ColaD::dequeue() { 
    if(empty()) {
        cout << "Queue is empty." << endl; 
    }
    else {
        Node* tm = front;
        front = front->next;
        delete tm;
        if(front == nullptr) {
            rear = nullptr;
        }
    }
}

bool ColaD::empty() {
    return (this->front == nullptr);
}

void ColaD::viewQueue() {
    Node* tm = front;
    while(tm != nullptr) {
        cout << tm->data << endl;
        tm = tm->next;
    }

    cout << endl;
}

ColaD::~ColaD() {

}