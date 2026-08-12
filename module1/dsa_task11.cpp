// Task 11:Write a menu driven program to perform following deletion operations in a single linked list 
// i. Deletion at beginning
// ii. Deletion at end
// iii. Deletion after a given node

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void deleteFromBegining() {
    if (head == NULL) {
        cout << "This is also empty , nothing can be deleted! " << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}


int main () {

    deleteFromBegining();

    return 0;
}
