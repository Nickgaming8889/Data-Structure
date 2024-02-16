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
int powL(double&);
int fact(double&);
int pown(int&, int&);
void binary(int, string&);
void octal(int, string&);
void hexa(int, string&);
void ansf(double &);
void clearAns(int &);

//Global variables...
static double ans = 0, ans_;

int main() {
    bool valid = false;
    int op, a, b;
    double c, d;
    string Bin, Hex, Oct;

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
            case 15:
                    cout << "Dec-Oct." << endl;
                    cout << "Give me a number: ";
                    do {
                        cin >> a;
                        if (cin.good()) {
                            valid = true;
                            cout << "The Octadecimal result is: ";
                            octal(a, Oct);
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

void ansf(double &pans) {
    ans = pans;
    ans_ = ans;
}

void clearAns(int &op_) {
    if (op_ == 2) {
        ans_ = 0;
    }
}