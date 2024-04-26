#include "../header/CList.h"

//List...
CList::CList() {
    head = nullptr;
    rear = nullptr;
}

void CList::push(string &name_, int &id_) {

}

void CList::pop(int ) {

}

Node* CList::search(int &id_) {

}

Node* CList::searchName(string &name_) {

}

bool CList::empty() {
    return (this->head == nullptr);
}

CList::~CList(){

}

//User...
User::User() {

}

string User::getName() {

}

void User::setName(string &name_) {

}

int User::getID() {

}

void User::setID(int &id_) {

}

//Node
Node::Node() {
    user = nullptr;
    next = nullptr;
}