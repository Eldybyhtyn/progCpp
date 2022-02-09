#include <iostream>

using std::cout;
using std::endl;


struct ForwardList {
    struct Node {
        Node* next;
        int data;
    };
    Node* head;

    
};

void addElem(ForwardList& list, int num) {
    struct ForwardList::Node* ptr = new ForwardList::Node;
    ptr->data = num;
    ptr->next = NULL;

    if (list.head == NULL) {
        list.head = ptr;
    } else {
        ForwardList::Node* prev = list.head;
        while (prev->next != NULL) {
            prev->next = prev;
        }
        prev->next = ptr;

    }
}

void PushFront(ForwardList& list, int value) {
    struct ForwardList::Node* ptr = new ForwardList::Node;
    ptr->data = value;
    ptr->next = NULL;
    if (list.head == NULL) {
        list.head = ptr;
    } else {
        ptr->next = list.head;
        list.head = ptr;
    }
}

void PrintList(ForwardList& list) {
    ForwardList::Node* ptr = list.head;
    while (ptr->next != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

void Construct(ForwardList& list) {
    list.head = NULL;
}

void Destruct(ForwardList& list) {
    ForwardList::Node* current = list.head;
    ForwardList::Node* prev;
    while (current != NULL) {
        prev = current;
        current->next = current;
        delete prev;
    }
}



int main() {


    ForwardList hi;

    PushFront(hi, 1);
    PushFront(hi, 2);
    PrintList(hi);



}