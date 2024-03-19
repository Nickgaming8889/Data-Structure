#include "../headers/Node.h"

Node::Node() {
    this->data = nullptr;
    this->next = nullptr;
}

Node::Node(int value) {
    data = new int;
    *data = value;
    next = nullptr;
}

Node::~Node() {
    delete data;
    delete next;
}

//Getters & Setters...
void Node::setData(int *value_) {
    this->data = value_;
}

int* Node::getData() {
    return this->data;
}