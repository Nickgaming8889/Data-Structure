#include "../headers/Node.h"

Node::Node() {
    this->name = "";
    this->data = nullptr;
    this->next = nullptr;
}

Node::Node(int value, string n, string sect) {
    data = new int;
    *data = value;
    name = n;
    section = sect;
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