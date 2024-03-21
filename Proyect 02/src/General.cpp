#include "../headers/General.h"

General::General() {
    front = nullptr;
    rear = nullptr;
}

void General::enqueue(int *value, string n, string s) {
    Node* newNode = new Node(*value, n, s);
    if(empty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void General::dequeue() {
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

void General::moveQueue(General* p) {
    Node* temp;
    temp = p->rear;
}

bool General::empty() {
    return (this->front == nullptr);
}

void General::viewGeneral() {
    Node* temp = front;
    while(temp != nullptr) {
        cout << *temp->data << " " << temp->section << " " << temp->name << endl;
        temp = temp->next;
    }
}

General::~General() {

}