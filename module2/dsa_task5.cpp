// Write a program to implement Stack operations (Push, Pop, Peek) using an array. 

#include <iostream>
using namespace std;

#define MAX 5 // size of the maximum stack elements

int stack[MAX]; 
int top = -1; // this means in starting, the stack is empty

// push operation
void push(int val) {
    if (top == MAX -1) {
        cout << "Stack overflow, cannot add Element" << endl;
    } else {
        top++;
        stack[top] = val;
        cout << "new value is " <<  stack[top] << endl;
        cout << val << " Successfully pushed " << endl; 
    }
}

// pop operation 
void pop () {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << stack[top] << " use the pop method" << endl;
        top--;
    }
}

void peek () {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "The top element is: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Current Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}


int main () {
    push(45);
    push(30);
    push(30345);
    push(350);
    push(3340);
    push(3056);
    push(3780);
    push(32);
    pop();
    peek();
    display();
}