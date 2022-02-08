#include <iostream>
#include "main.h"

using namespace std;

void show(int num1, int num2) {
    
    cout << &num1 << " " << &num2 << endl;
    cout << (&num1 + 2 == &num2) << endl;
    
}

int main() {

    int num1, num2;
    cout << h << endl;
    cout << &num1 << " " << &num2 << endl;

    

    show(num1, num2);
    

    return 0;
}