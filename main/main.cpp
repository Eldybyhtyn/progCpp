#include <iostream>
#include <string>

using std::cout;
using std::endl;

struct Human {
    int age = 5;
    std::string name = "dsf";
    std::string surname = "fasd";

    struct arms {
        bool leftArm = true;
        bool rightArm = true;
    };

};

int main() {

    Human human1 {6, "lox", "togelox"};

    struct Human *ptr;
    std::string *ptrStr;

    ptr = new struct Human;
    struct Human human2;
    ptr = &human2;
    human2.age = 5;
    ptr->name = "lol";
    (*ptr).surname = "hello";
    ptrStr = &ptr->surname;
    cout << human2.name << endl;

    cout << ptr << endl;
    cout << &human2 << endl;

    return 0;
}