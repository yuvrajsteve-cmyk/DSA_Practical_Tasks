// Write a program to implement Queue operations (Enqueue, Dequeue) using an array. 

#include <iostream>
using namespace std;

#define MAX 10

int queue[MAX];
int front = 0; // front side
int rear = -1; // last side

void enqueue(int val) {
    if (rear == MAX -1) {
        cout << "Queue is Full (Overflow)!\n";
    } else {
        rear++;
        queue[rear] = val;
        cout << "Added in Queue " << endl;
    }
}

void dequeue() {
    if (front > rear) {
        cout << "queue is empty (Overflow)!\n";
    } else {
        cout << queue[front] << "dequeue is success.\n";
        front++;
    }
}

void display() {
    if (front > rear) {
        cout << "Queue is empty " << endl;
    } else {
        cout << "Current queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main () {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    enqueue(100);
    display();
    

    return  0;
    
}