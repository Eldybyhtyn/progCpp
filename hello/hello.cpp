#include <iostream>
#include <math.h>
using std::cout;
using std::cin;

double maxelem(double mas[], int length) {
    
    double max = *mas;
    cout << max << " - 1 max" << std::endl;
    for (int i = 1; i < length; i++) {
        if (*(mas + i) > *(mas + i - 1)) {
            max = *(mas + i);
            cout << *(mas + i) << " > " << *(mas + i - 1) << std::endl;
            cout << max << " - max" << std::endl;
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

