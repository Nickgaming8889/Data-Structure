#include <iostream>

int add(int* , int*);
int sub(int* , int*);
int multiply(int* , int*);
double divide(int* , int*);


int main(int argc, char const *argv[]) {
    int op, x, y;
    int *p, *q;

    do {
        std::cout << "Main Menu." << std::endl;
        std::cout << "1. Addition." << std::endl;
        std::cout << "2. Substraction." << std::endl;
        std::cout << "3. Multiply." << std::endl;
        std::cout << "4. Divide." << std::endl;
        std::cout << "5. Exit." << std::endl;

        std::cout << "Select an option: ";
        std::cin >> op;

        switch (op) {
            case 1: 
                    std::cout << "\nThis is Addition" << std::endl;
                    std::cout << "Enter the numbers to add: ";
                    std::cin >> x >> y;
                    p = &x; q = &y;

                    std::cout << add(p, q) << std::endl;

                break;
            case 2:
                    std::cout << "This is Substraction" << std::endl;
                    std::cout << "Enter the numbers to substract: ";
                    std::cin >> x >> y;
                    p = &x, q = &y;

                    std::cout << sub(p, q) << std::endl;

                break;
            case 3:
                    std::cout << "This is Multiply" << std::endl;
                    std::cout << "Enter the numbers to multiply: ";
                    std::cin >> x >> y;
                    p = &x, q = &y;

                    std::cout << multiply(p, q) << std::endl;

                break;
            case 4:
                    std::cout << "This is Divide" << std::endl;
                    std::cout << "Enter the numbers to multiply: ";
                    std::cin >> x >> y;
                    p = &x, q = &y;

                    std::cout << divide(p, q) << std::endl;
                break;
            default:
                    int op_;
                    std::cout << "Do you want to close? 1[YES] 2[NO] ";
                    std::cin >> op;

                    if (op != 1) {
                        continue;
                    }
                    else {
                        std::cout << "Good to see you!" << std::endl;
                        return 1;
                    }
                break;
        }

    } while (op != 5);
    

    return 0;
}

int add(int *a_, int *b_) {
    int *rlt = (int*)malloc(sizeof(int));

    *rlt = *a_ + *b_;

    return *rlt;
}

int sub(int *a_, int *b_) {
    int *rlt = (int*)malloc(sizeof(int));

    *rlt = *a_ - *b_;

    return *rlt;
}

int multiply(int *a_, int *b_) {
    int *rlt = (int*)malloc(sizeof(int));

    *rlt = *a_ * *b_;

    return *rlt;
}

double divide(int *a_, int *b_) {
    double *rlt = (double*)malloc(sizeof(double));
    double j = static_cast<double>(*a_);
    double i = static_cast<double>(*b_);


    *rlt = j / i;

    return *rlt;
}