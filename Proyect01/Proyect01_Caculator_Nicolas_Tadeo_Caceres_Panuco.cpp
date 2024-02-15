#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <math.h>

using namespace std;

//Funtions call's...
double add(double&, double&);
double sub(double&, double&);
double div(double&, double&);
double mult(double&, double&);
int percent(int&, double&);
int pow_(int&);
int fact(int&);
int pown(int&, int&);
void binary(int ,string&);
void octal();
void hexa(int, string&);

//Global variables...
static double ans = 0;

int main() {
    bool valid = false;
    int op, a, b;
    double c, d;
    string Bin, Hex;

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
        cout << "11. Sin" << endl;
        cout << "12. Tan" << endl;
        cout << "13. Dec-Bin" << endl;
        cout << "14. Dec-Hex" << endl;


        //Here you can select the operation that you want...
        cout << "Select the operation option: ";
        //Validation Pass...
        do {
            cin >> op;
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... ";
            }
        }while(!valid);

        switch(op) {
            case 1:
                    cout << "Addition." << endl;
                    cout << "Give the numbers: ";
                    do {
                        cin >> c >> d;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << add(c, d) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);

                break;
            case 2:
                    cout << "Substraction." << endl;
                    cout << "Give the numbers: ";
                    do {
                        cin >> c >> d;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << sub(c, d) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 3:
                    cout << "Divide." << endl;
                    cout << "Give the numbers: ";
                    do {
                        cin >> c >> d;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << div(c, d) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 4:
                    cout << "Multiply." << endl;
                    cout << "Give the numbers: ";
                    do {
                        cin >> c >> d;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << mult(c, d) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 5:
                    cout << "Percent." << endl;
                    cout << "Give the number and the percent that you want on decimal point: ";
                    do {
                        cin >> a >> d;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << percent(a, d) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 6:
                    cout << "Pow." << endl;
                    cout << "Give the number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << pow_(a) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 7:
                    cout << "Factorial." << endl;
                    cout << "Give the number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << fact(a) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 8:
                    cout << "Pow^n" << endl;
                    cout << "Give the number and the pow: ";
                    do {
                        cin >> a >> b;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << pown(a, b) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 9:
                    cout << "Square Root." << endl;
                    cout << "Give the number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << sqrt(a) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 10:
                    cout << "Cos." << endl;
                    cout << "Give the grade: ";
                    do {
                        cin >> c;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << cos(c) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 11:
                    cout << "Sin." << endl;
                    cout << "Give the grade: ";
                    do {
                        cin >> c;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << sin(c) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 12:
                    cout << "Tan." << endl;
                    cout << "Give the grade: ";
                    do {
                        cin >> c;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << tan(c) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 13:
                    cout << "Dec-Bin." << endl;
                    cout << "Give me a number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The binary result is: ";
                            binary(a, Bin);
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 14:
                    cout << "Dec-Hex." << endl;
                    cout << "Give me a number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The hexadecimal result is: ";
                            hexa(a, Hex);
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            default:
                    cout << "Do you want to exit? 1[Y] 2[N] " ;
                    cin >> op;

                    if (op != 1) {
                        continue;
                    } 
                    else 
                        return 1;
                break;
        }

    }while(op != 15);

    return 0;
}

double add(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa + pb;

    return *rlt;
}

double sub(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa - pb;

    return *rlt;
    
}

double div(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa / pb;

    return *rlt;
}

double mult(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa * pb;

    return *rlt;
}

int percent(int &pa, double &pb) {
    int *rlt = new int;
    *rlt = pa * pb;

    return *rlt;
}

int pow_(int &pa) {
    int *rlt = new int;
    *rlt = pa *= pa;

    return *rlt;
}

int fact(int &pa) {
    int *rlt = new int;
    int j = 1;

    if (pa == 0)
        return *rlt = 1;
    
    for (int i = 1; i <= pa; i++) {
        *rlt = j *= i;
    }

    return *rlt;
}

int pown(int &pa, int &pb) {
    int rlt = 1;

    for (int i = 1; i <= pb; i++) {
        rlt *= pa;
    }

    return rlt;
}

void binary(int numeroDecimal, string &ptrBinary) {
    ptrBinary = "";
    for (int i = 7; i >= 0; i--) {
        ptrBinary += "01"[numeroDecimal%2];
        numeroDecimal /= 2;
    }

    reverse(ptrBinary.begin(), ptrBinary.end());
    
    cout << ptrBinary << endl;
}

void hexa(int numeroDecimal, string &ptrHex) {
    ptrHex = " ";
    while(numeroDecimal > 0) {
        ptrHex += "0123456789ABCDEF"[numeroDecimal%16];
        numeroDecimal /= 16;
    }

    reverse(ptrHex.begin(), ptrHex.end());

    cout << ptrHex << endl;
}

void octal() {

}