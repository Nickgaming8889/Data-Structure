#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

double add();
double sub();
double div();
double mult();
int percent();
int pow_();
int fact();
int pow_y();
int root();
void coseno();
void seno();
void tangente();
void binary();
void octal();
void hexa();

int main() {
    int op;

    do {
        //At this part you can see the option from de Main Menu...
        cout << "Main Menu\n" << endl;
        cout << "1. Addtion" << endl;
        cout << "2. Substract" << endl;
        cout << "3. Divide" << endl;
        cout << "4. Multiply" << endl;
        cout << "5. Percent" << endl;
        cout << "6. Pow" << endl;
        cout << "7. Factorial" << endl;
        cout << "8. Pow^n" << endl;
        cout << "9. Square Root" << endl;
        cout << "10. Cos" << endl;
        cout << "11. Sen" << endl;
        cout << "12. Tan" << endl;

        //Here you can select the operation that you want...
        cout << "Select the operation option: ";
        cin >> op; 

    }while(true);

    return 0;
}