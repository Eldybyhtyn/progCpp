#include <iostream>

int main() {


    int *ptr = new int(0x16b7d5a6c70);

    std::cout << *ptr << std::endl;
    delete ptr;

    return 0;
}