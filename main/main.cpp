#include <iostream>

using std::cout;
using std::endl;


int main() {

    int *ptr = new int(23);
    cout << ptr << endl;
    delete ptr;

    return 0;
}