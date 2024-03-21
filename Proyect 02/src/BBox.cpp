#include "../headers/BBox.h"

BBox::BBox() {
    this->front = nullptr;
    this->rear = nullptr;
}

void BBox::enqueue(int *value, string n) {
    Node* newNode = new Node(*value, n);
    if(empty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void BBox::dequeue() {
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

void BBox::cloneQueue(General* p, BBox* q) {
    
}

bool BBox::empty() {
    return (this->front == nullptr);
}

void BBox::viewBBox() {
    Node* temp = front;
    while(temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

BBox::~BBox() {
    
}