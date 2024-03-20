#include "../headers/Managment.h"

Managment::Managment() {
    this->front = nullptr;
    this->rear = nullptr;
}

void Managment::enqueue(int *value, string n) {
    Node* newNode = new Node(*value, n);
    if(empty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Managment::dequeue() {
    Node* temp;
    if(empty()) {
        cout << "The main queue is empty" << endl;
    }
    else {
        temp = front;
        front = front->next;
        delete temp;
        if(front == nullptr)
            rear == nullptr;
    }
}

void Managment::cloneQueue() {
    
}

bool Managment::empty() {
    return (this->front == nullptr);
}

void Managment::viewManagment() {
    Node* temp = front;
    while(temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Managment::~Managment() {
    
}