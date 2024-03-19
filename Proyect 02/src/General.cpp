#include "../headers/General.h"

General::General() {

}

void General::testing() {
    int a = 10;
    Node* newNode = new Node();
    int* pa = &a;
    newNode->setData(pa);

    cout << newNode->getData() << endl;
}

General::~General() {

}