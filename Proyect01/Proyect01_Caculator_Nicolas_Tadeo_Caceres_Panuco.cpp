#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

double add(double&, double&);
double sub(double&, double&);
double div(double&, double&);
double mult(double&, double&);
int percent(int&, double&);
int pow_(int&);
int fact(int&);
int pow_y(int&, int&);
int root(int&);
void coseno();
void seno();
void tangente();
void binary();
void octal();
void hexa();

int main() {
    bool valid = false;
    int op, a, b;
    double c, d;

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
                    cout << "Give the number and the pow: ";
                    do {
                        cin >> a >> b;
                        if (cin.good()) {
                            valid = true;
                            cout << "The result is: " << pow_y(a, b) << "\n\n";
                        }
                        else {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Invalid input. Try again... " << endl;;
                        }
                    }while(!valid);
                break;
            case 9:

                break;
            case 10:

                break;
            case 11:

                break;
            case 12:

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

    }while(op != 13);

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

int pow_y(int &pa, int &pb) {
    
}

int root(int &pa) {

    return 0;
}

void coseno() {

}

void seno() {

}

void tangente() {

}