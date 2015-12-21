#include <iostream>
#include <Rdefines.h>
#include <stdio.h>
#include <R.h>

using namespace std;

extern "C" {
    SEXP Hello() {
        cout << "Hello, world!" << endl;
        return 0;
    }
}

int main() {
    Hello();
    return 0;
}