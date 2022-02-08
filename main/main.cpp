#include <iostream>
#include <typeinfo>

using namespace std;

void showMas();
double* fillArr(double*, double*);

int main() {
    
    double mas[2];
    double *end = std::end(mas);
    fillArr(mas, end);
    return 0;
}

void showMas() {
    cout << "Hello world!" << endl;
}

double* fillArr(double *ptr, double *end) {
    for (double *ptr2 = ptr; ptr2 < end; ptr2++) {
        cin >> *ptr2;
    }

    return ptr;
    
}