#include <iostream>
using namespace std;

bool primo(int *pa_);

int main(int argc, char const *argv[]) {
    int a = 100;
    int *pa = &a;

    primo(pa);

    return 0;
}

bool primo(int *pa_) {
    for (int i = 2; i <= *pa_; i++) {
        bool pr = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                pr = false;
                break;
            }
        }

        if (pr) {
            cout << i << endl; 
        }
    }

    return true;
}