#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class File{
private:
public:
void WriteToFile();
int * ReadToFile();

};
void File::WriteToFile() {
fstream file;
file.open("c:/file.txt", ios::app);
file << 10 << endl;
file << 20 << endl;
file << 30 << endl;
file.close();
}
int* File::ReadToFile() {
fstream file;
char data[200];
int i=0,array[5];
file.open("c:/file.txt", ios::in);
file >> data; // read line
while (!file.eof()) {
file >> data; // read file
array[i]=atoi(data);
i++;
}
file.close(); // close file
return array; }

class Node {
public:
int number;
Node *next;
Node *back;
};
class CircularList{
private:
Node *ptrHead;
public:
CircularList();
~CircularList();
void insert_First(int);
bool empty();
void print();
};
CircularList::CircularList(){
ptrHead = NULL; }
CircularList::~CircularList(){}
void CircularList::insert_First(int number){
Node *new_node = new Node();
new_node

->number = number;
if (ptrHead == NULL) {
new_node

->next = new_node;

new_node

->back = new_node;
ptrHead = new_node;
}
else {
Node *last_node = ptrHead
->back;

new_node

->next = ptrHead;

new_node

->back = last_node;

ptrHead

->back = new_node;

last_node

->next = new_node;
ptrHead = new_node;
}
}
bool CircularList::empty(){
if (ptrHead == NULL)
return true;
else
return false; }

void CircularList::print(){
if (!empty()) {
Node *temp = ptrHead;
do {
cout<<temp->number <<"-";
temp = temp->next;
} while (temp != ptrHead);
}
}

int main(int argc, char** argv) {
File file;
CircularList *obj = new CircularList();
file.WriteToFile();
int *array=file.ReadToFile();
obj->insert_First(array[0]);
obj->insert_First(array[1]);
obj->insert_First(array[2]);
obj->print();

delete obj;
return 0;
}