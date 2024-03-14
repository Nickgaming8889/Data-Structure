#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>
#include <sstream>
#include <bitset>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

//Funtions call's...
double add(double&, double&);
double sub(double&, double&);
double div(double&, double&);
double mult(double&, double&);
int percent(int&, double&);
int powL(double&);
int fact(double&);
int pown(int&, int&);
void binary(int, string&);
void octal(int, string&);
void hexa(int, string&);
int binDec(string&);
int hexDec(string&);
int octDec(int&);
string binOctal(string&);
int octBin(int&);
void hexBin(string&);
void binHex(int&);
void ansf(double &);
void clearAns(int &);

//Global variables...
static double ans = 0, ans_;

int main() {
    bool valid = false;
    int op, a, b;
    double c, d;
    string Bin, Hex, Oct, Bin_ = " ", Hex_ = " ";

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
        cout << "15. Dec-Oct" << endl;
        cout << "16. Bin-Dec" << endl;
        cout << "17. Oct-Dec" << endl;
        cout << "18. Hex-Dec" << endl;
        cout << "19. Bin-Oct" << endl;
        cout << "20. Oct-Bin" << endl;
        cout << "21. Bin-Hex" << endl;
        cout << "22. Hex-Bin" << endl;




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
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give me a number: ";
                                    do {
                                        cin >> d;
                                        if (cin.good()) {
                                            valid = true;
                                            cout << "The result is: " << add(ans, d) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me the numbers: ";
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
                    }
                break;
            case 2:
                    cout << "Substraction." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give me a number: ";
                                    do {
                                        cin >> d;
                                        if (cin.good()) {
                                            valid = true;
                                            cout << "The result is: " << sub(ans, d) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me the numbers: ";
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
                    }
                break;
            case 3:
                    cout << "Divide." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give me a number: ";
                                    do {
                                        cin >> d;
                                        if (cin.good()) {
                                            valid = true;
                                            cout << "The result is: " << div(ans, d) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me the numbers: ";
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
                    }
                break;
            case 4:
                    cout << "Multiply." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give me a number: ";
                                    do {
                                        cin >> d;
                                        if (cin.good()) {
                                            valid = true;
                                            cout << "The result is: " << mult(ans, d) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me the numbers: ";
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
                    }
                break;
            case 5:
                    cout << "Percent." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give the percent on decimal point: ";
                                    do {
                                        cin >> d;
                                        if (cin.good()) {
                                            valid = true;
                                            int ansv = static_cast<int>(ans);
                                            cout << "The result is: " << percent(ansv, d) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the number and the percent on decimal point: ";
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
                    }
                break;
            case 6:
                    cout << "Pow." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The Power result is: " << powL(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the number: ";
                        do {
                            cin >> d;
                            if (cin.good()) {
                                valid = true;
                                cout << "The result is: " << powL(d) << "\n\n";
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                    }
                break;
            case 7:
                    cout << "Factorial." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The Power result is: " << fact(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the number: ";
                        do {
                            cin >> d;
                            if (cin.good()) {
                                valid = true;
                                cout << "The result is: " << fact(d) << "\n\n";
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                    }
                break;
            case 8:
                    cout << "Pow^n" << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "Give me the power: ";
                                    do {
                                        cin >> b;
                                        if (cin.good()) {
                                            valid = true;
                                            int ansv = static_cast<int>(ans);
                                            cout << "The result is: " << pown(ansv, b) << "\n\n";
                                        }
                                        else {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "Invalid input. Try again... " << endl;;
                                        }
                                    }while(!valid);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the number and the power: ";
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
                    }
                break;
            case 9:
                    cout << "Square Root." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The result is: " << sqrt(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the number: ";
                        do {
                            cin >> d;
                            if (cin.good()) {
                                valid = true;
                                cout << "The result is: " << sqrt(d) << "\n\n";
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                    }
                break;
            case 10:
                    cout << "Cos." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The result is: " << cos(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
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
                                cout << "Invalid input. Try again... " << endl;
                            }
                        }while(!valid);
                    }
                break;
            case 11:
                    cout << "Sin." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The result is: " << sin(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
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
                                cout << "Invalid input. Try again... " << endl;
                            }
                        }while(!valid);
                    }
                break;
            case 12:
                    cout << "Tan." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The result is: " << tan(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
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
                                cout << "Invalid input. Try again... " << endl;
                            }
                        }while(!valid);
                    }
                break;
            case 13:
                    cout << "Dec-Bin." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The result is: ";
                                    binary(ans, Bin);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
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
                    }
                break;
            case 14:
                    cout << "Dec-Hex." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The Hexa result is: ";
                                    hexa(ans, Hex);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me a number: ";
                        do {
                            cin >> a;
                            if (cin.good()) {
                                valid = true;
                                cout << "The Hexa result is: ";
                                hexa(a, Hex);
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                    }
                break;
            case 15:
                    cout << "Dec-Oct." << endl;
                    if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The Octa result is: ";
                                    octal(ans, Oct);
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give me a number: ";
                        do {
                            cin >> a;
                            if (cin.good()) {
                                valid = true;
                                cout << "The Octa result is: ";
                                octal(a, Oct);
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                    }
                break;
            case 16:
                    cout << "Bin-Dec" << endl;
                    cout << "Give me a Binary number: ";
                    do {
                        cin >> Bin_;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: ";
                            cout << binDec(Bin_) << endl;
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 17:
                    cout << "Oct-Dec" << endl;
                    cout << "Give me the Octal number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: ";
                            cout << octDec(a) << endl;
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 18:
                    cout << "Hex-Dec" << endl;
                    cout << "Give me the Hexa number: ";
                    do {
                        cin >> Hex_;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: ";
                            cout << hexDec(Hex_) << endl;
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 19:
                    cout << "Bin-Oct" << endl;
                    cout << "Give me the Binary number: ";
                    do {
                        cin >> Bin_;
                        if (cin.good()) {
                            valid = true;
                            cout << "The Octa result is: ";
                            cout << binOctal(Bin_) << endl;
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 20:
                    cout << "Oct-Bin" << endl;
                    cout << "Give me the Octa number: ";
                    do {
                            cin >> a;
                            if (cin.good()) {
                                valid = true;
                                cout << "The binary result is: ";
                                octBin(a);
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                break;
            case 21:
                    cout << "Bin-Hex" << endl;
                    cout << "Give me the Binary number: ";
                    do {
                            cin >> a;
                            if (cin.good()) {
                                valid = true;
                                binHex(a);
                                cout << '\n';
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);
                break;
            case 22:
                    cout << "Hex-Bin" << endl;
                    cout << "Give me the Hexa number: ";
                    do {
                            cin >> Hex_;
                            if (cin.good()) {
                                valid = true;
                                cout << "The binary result is: ";
                                hexBin(Hex_);
                                cout << '\n';
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

    }while(op != 23);

    return 0;
}

double add(double &pa, double &pb) {
    double *rlt = new double;
    *rlt = pa + pb;

    ansf(*rlt);

    return *rlt;
}

double sub(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa - pb;

    ansf(*rlt);

    return *rlt;
}

double div(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa / pb;

    ansf(*rlt);

    return *rlt;
}

double mult(double &pa, double &pb) {
    double *rlt = new double;   
    *rlt = pa * pb;

    ansf(*rlt);

    return *rlt;
}

int percent(int &pa, double &pb) {
    int *rlt = new int;
    *rlt = pa * pb;

    double t = static_cast<double>(*rlt);
    ansf(t);
    
    return *rlt;
}

int powL(double &pa) {
    double *rlt = new double;
    *rlt = pa *= pa;

    ansf(*rlt);

    int r = static_cast<int>(*rlt);
    return *rlt;
}

int fact(double &pa) {
    int *rlt = new int;
    int j = 1;

    if (pa == 0)
        return *rlt = 1;
    
    for (int i = 1; i <= pa; i++) {
        *rlt = j *= i;
    }

    double t = static_cast<double>(*rlt);
    ansf(t);

    return *rlt;
}

int pown(int &pa, int &pb) {
    int rlt = 1;

    for (int i = 1; i <= pb; i++) {
        rlt *= pa;
    }

    double t = static_cast<double>(rlt);
    ansf(t);

    return rlt;
}

void binary(int numeroDecimal, string &ptrBinary) {
    ptrBinary = "";
    while(numeroDecimal > 0) {
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

void octal(int numeroDecimal, string &ptrOct) {
    ptrOct = " ";
    while (numeroDecimal > 0) {
        ptrOct += "01234567"[numeroDecimal%8];
        numeroDecimal /= 8;
    }

    reverse(ptrOct.begin(), ptrOct.end());
    
    cout << ptrOct << endl;
}

int binDec(string &binario) {
    bitset<32> bits(binario);
    int decimal = bits.to_ulong();

    double x = static_cast<double>(decimal);
    ansf(x);

    return decimal;
}

int octDec(int &o) {
    int num = o; 
    int dec_value = 0;
    int base = 1;

    int temp = num;

    while(temp) {
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dec_value += last_digit * base;
        base = base * 8; 
    }

    double x = static_cast<double>(dec_value);
    ansf(x);

    return dec_value;
}

int hexDec(string &hexadecimal) {
    stringstream ss;
    ss << hex << hexadecimal;
    int decimal;
    ss >> decimal;
    
    double x = static_cast<double>(decimal);
    ansf(x);

    return decimal;
}

string binOctal(string &bin) {
    if (bin.find_first_not_of("01.") != string::npos) {
        return "Invalid binary number";
    }

    int decimal = stoi(bin.substr(0, bin.find('.')),
                       nullptr, 2);
    string octal = "";
    while (decimal > 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }

    if (bin.find('.') != string::npos) {
        double fractional = stod(
            "0." + bin.substr(bin.find('.') + 1));
        octal += ".";
        for (int i = 0; i < 5; i++) {
            fractional *= 8;
            octal += to_string((int)floor(fractional));
            fractional -= floor(fractional);
        }
    }

    return octal;
}

int octBin(int &o) {
    long bin_ = 0;
    int decimal = 0, prod = 0;

    while(o != 0) {
        decimal += (o%10) * pow(8, prod);
        ++prod;
        o /= 10;
    }

    prod = 1;
    while(decimal != 0) {
        bin_ += (decimal%2) * prod;
        decimal /= 2;
        prod *= 10;
    }

    cout << bin_ << endl;

    return 0;
}

void hexBin(string &hex_) {
    size_t i = (hex_[1] == 'x' || hex_[1] == 'X');

    while(hex_[i]) {
        switch(hex_[i]) {
            case '0':
                cout << "0000";
            break;
            case '1':
                cout << "0001";
            break;
            case '2':
                cout << "0010";
            break;
            case '3':
                cout << "0011";
            break;
            case '4':
                cout << "0100";
            break;
            case '5':
                cout << "0101";
            break;
            case '6':
                cout << "0110";
            break;
            case '7':
                cout << "0111";
            break;
            case '8':
                cout << "1000";
            break;
            case '9':
                cout << "1001";
            break;
            case 'A':
            case 'a':
                cout << "1010";
            break;
            case 'B':
            case 'b':
                cout << "1011";
            break;
            case 'C':
            case 'c':
                cout << "1100";
            break;
            case 'D':
            case 'd':
                cout << "1101";
            break;
            case 'E':
            case 'e':
                cout << "1110";
            break;
            case 'F':
            case 'f':
                cout << "1111";
            break;
            default:
                cout << "Invalid input...";
            break;
        }
        i++;
    }
}

void binHex(int &bin) {
    int hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];

    while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bin = bin/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
}

void ansf(double &pans) {
    ans = pans;
    ans_ = ans;
}

void clearAns(int &op_) {
    if (op_ == 2) {
        ans_ = 0;
    }
}