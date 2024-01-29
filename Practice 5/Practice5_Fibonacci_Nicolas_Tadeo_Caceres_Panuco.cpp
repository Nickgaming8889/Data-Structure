#include <iostream>

int fibonacci(int *);

int main(int argc, char const *argv[]){
    int a, *pa;

        std::cout << "Give me a number: ";
        std:: cin >> a;
        pa = &a;

        std::cout << fibonacci(pa);
    
    return 0;
}

int fibonacci(int *pa_) {
    int *rlt = (int*)malloc(sizeof(int));
    int fibonacci;

    

    return 0;
}