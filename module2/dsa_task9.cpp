// Task 9: Write a program to implement insertion and deletion operations in a
// queue using linear array. 


#include <iostream>
using namespace std;

int queue_array[5];
int max_size = 5;
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == max_size -1) {
        cout << "Queue is overflow! " << endl;
    }
    else {
        if (front == -1) {
            front = 0;
        }
        rear = rear + 1;
        queue_array[rear] = value;
        cout << value << " inserted into Queue " << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is underflow! " << endl;
    }
    else {
        cout << queue_array[front] << " deleted from Queue. " << endl;
        front = front + 1;
    }
}

int main () {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    dequeue();

    return 0;
}