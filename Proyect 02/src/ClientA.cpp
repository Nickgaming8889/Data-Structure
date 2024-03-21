#include "../headers/ClientA.h"

ClientA::ClientA() {
    this->front = nullptr;
    this->rear = nullptr;
}

void ClientA::enqueue(int *value, string n) {
    Node* newNode = new Node(*value, n);
    if(empty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void ClientA::dequeue() {
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

bool ClientA::empty() {
    return (this->front == nullptr);
}

void ClientA::viewClientA() {
    Node* temp = front;
    while(temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

ClientA::~ClientA() {
    
}