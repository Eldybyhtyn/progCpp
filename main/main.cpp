#include <iostream>

using namespace std;

void show(int mas[], int length) {
    int 
    for (int i = 0; i < length; i++) {
        cout << *(mas + i) << endl;
    }
}

int main() {

    
    
    srand(time(NULL));

    int mas[10];

    for (int i = 0; i < 10; i++) {
        mas[i] = rand() % 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << mas[i] << " ";
    }

    cout << endl;

    show(mas, sizeof(mas) / sizeof(int));

    return 0;
}