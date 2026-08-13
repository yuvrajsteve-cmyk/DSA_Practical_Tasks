// Task 13:Write a program to implement push and pop operations on a queue using linked
// list.
 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = top;
    top = newNode;
    cout << "Pushed: " << val << endl; 
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Popped: " << temp->data << endl;
    top = top->next;
    delete temp;
}

void peek() {
    if (top == NULL) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    cout << "Top Element is: " << top->data << endl;
}

void display() {
    if (top == NULL) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack Elements: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    cout << "=== STACK USING LINKED LIST ===" << endl << endl;
    
    push(10);
    push(20);
    push(30);
    push(40);
    
    cout << "-------------------------------" << endl;
    display();
    peek();
    cout << "-------------------------------" << endl;

    pop();
    
    cout << "-------------------------------" << endl;
    display();
    peek();

    return 0;
}
