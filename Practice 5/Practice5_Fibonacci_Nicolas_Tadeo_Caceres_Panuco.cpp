#include <iostream>

int p1 = 0, p2 = 1;

int fibonacci(int *);

int main(int argc, char const *argv[]){
    int a, *pa;

    std::cout << "\nGive me a number: ";
    std:: cin >> a;
    pa = &a;

    fibonacci(pa);
    
    return 0;
}

int fibonacci(int *pa_) {
    int *rlt = (int*)malloc(sizeof(int));
    int fib;
    
    if (*pa_ == 0) {
        std::cout << "Invalid input, try again" << std::endl;
        return 0;
    }

    for (int i = 1; i <= *pa_; i++) {
        if (i > 2) {
            fib = p1 + p2;
            p1 = p2;
            p2 = fib;
            std::cout << fib;
        }
        else if (i == 2) {
            std::cout << p2;
        }
        else if (i == 1) {
            std::cout << p1;
        }
    }

    return 0;
}