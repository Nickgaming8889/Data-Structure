#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

void gotoxy(int x, int y) {
    printf("\033[%d;%df", x, y);
}

int validation(int op_) {
    bool valid = false;
    
    do {
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... ";
            }
        }while(!valid);

    return op_;
}