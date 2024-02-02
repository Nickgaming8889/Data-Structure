#include <iostream>
#include <math.h>
using namespace std;

int serie(int *);

int main(int argc, char const *argv[]) {
    int a = 5; int *pa;
    pa = &a;

    serie(pa);

    return 0;
}

int serie(int *pa_) {
    int *rlt = (int*)malloc(sizeof(int));

    for (int i = 1; i <= *pa_; i++) {
        *rlt = 3 - pow(2, i);
        
        cout << *rlt << endl;
    }

    return 0;
}