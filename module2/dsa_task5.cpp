// Task 5: Write a program to implement push and pop operations on a stack using linear array. 

#include <iostream>
using namespace std;

int max_size = 5;
int top = -1;
int stack_array[5];

// push the element in the stack
void push (int val) {
    if (top == max_size - 1) { // for check stack is full or not
        cout << "Stack Overflow! " << endl;
    } else {
        top = top + 1; // top increase + 1
        stack_array[top] = val;
        cout << val << " Add in the stack " << endl;
    }
}

void pop () {
    if (top == -1 ) { // check stack is empty or not
        cout << "Stack Underflow " << endl;
    } else {
        cout << stack_array[top] << " Poped " << endl;
        top = top - 1; // top down step one
    }
}


int main () {

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop();
    return 0;
}