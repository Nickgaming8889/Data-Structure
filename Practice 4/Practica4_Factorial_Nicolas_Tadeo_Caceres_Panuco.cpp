#include <iostream>

int fact(int*);

int main() {
    int a;

    std::cout << "Give a number: ";
    std::cin >> a;
    int *pa = &a;
    
    std::cout << fact(pa) << std::endl;
    return 0;
}

int fact(int *pa_){
    int *rlt = (int*)malloc(sizeof(int));    
    int j = 1;

    for (int i = 1; i <= *pa_; i++) {
        *rlt = j *= i;
    }

    return *rlt;
}