// Task 10:Write a menu driven program to perform following insertion operations in a single linked list: 
// i. Insertion at beginning
// ii. Insertion at end
// iii. Insertion after a given node
// iv. Traversing a linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtBeggining (int val) {
    Node * newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

int main () {
    cout << "Doom's Train is Ready! " << endl;
    insertAtBeggining(10);
    insertAtBeggining(20);
    insertAtBeggining(30);

    Node* temp = head;
    cout << "Your train: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;


    return 0;
}

