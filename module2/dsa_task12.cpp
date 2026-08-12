// Task 12:Write a program to implement push and pop operations on a stack using linked list. 

#include <iostream>
using namespace std;

const int MAX = 5;
int arr[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push " << val << endl;
        return;
    }
    top++;
    arr[top] = val;
    cout << "Pushed: " << val << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop." << endl;
        return;
    }
    cout << "Popped: " << arr[top] << endl;
    top--;
}

void peek() {
    if (top == -1) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    cout << "Top Element is: " << arr[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== STACK IMPLEMENTATION USING ARRAY ===" << endl << endl;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    display();
    peek();

    cout << endl;
    pop();
    
    display();
    peek();

    return 0;
}
