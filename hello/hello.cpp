#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

double maxelem(double mas[], int length) {
    
    double max = *mas;
    for (int i = 1; i < length; i++) {
        if (*(mas + i) > max) {
            max = *(mas + i);
        }
    }

    return max;
}

void showarray(double *mas, int length) {
    for (int i = 0; i < length; i++) {
        cout << *(mas + i) << " ";
        
    }
}



int main() {
	
    
	srand(time(NULL));

    double mas[20];

    for (int i = 0; i < 20; i++) {
        mas[i] = rand() % 20;
    }

    cout << maxelem(mas, sizeof(mas) / sizeof(double)) << std::endl;

    

    showarray(mas, sizeof(mas) / sizeof(double));



	return 0;
}

