#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

double maxelem(double mas[]) {
    
    double max = mas[0];
    for (int i = 1; i < sizeof(mas) / sizeof(mas[0]); i++) {
        if (mas[i] > mas[i - 1]) max = mas[i];
    }

    return max;
}

void showarray(double mas[]) {
    for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++) {
        cout << mas[i] << " ";
    }
}
