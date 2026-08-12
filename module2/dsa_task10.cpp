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

void insertAtBeginning(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    cout << "Success: Inserted " << val << " at beginning." << endl;
}

void insertAtEnd(int val) {
    Node* lastNode = new Node();
    lastNode->data = val;
    lastNode->next = NULL;

    if (head == NULL) {
        head = lastNode;
        cout << "Success: Inserted " << val << " at end." << endl;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = lastNode;
    cout << "Success: Inserted " << val << " at end." << endl;
}

void insertAfterNode(int target, int val) {
    Node* newNode = new Node();
    newNode->data = val;

    Node* temp = head;
    while(temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    
    if (temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Success: Inserted " << val << " after " << target << "." << endl;
    } else {
        cout << "Error: Target node " << target << " not found!" << endl;
    }
}

void traverseList() {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    
    Node* temp = head;
    cout << "Your Train: ";
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    cout << "=== DOOM'S LINKED LIST TEST ===" << endl << endl;

    // 1. Test Insertion at Beginning
    insertAtBeginning(10);
    insertAtBeginning(20);
    
    // 2. Test Insertion at End
    insertAtEnd(100);
    insertAtEnd(120);

    // 3. Test Insertion After a Node
    insertAfterNode(10, 99);

    cout << endl;
    
    // 4. Test Traversing
    traverseList();

    cout << endl << "===============================" << endl;
    return 0;
}

