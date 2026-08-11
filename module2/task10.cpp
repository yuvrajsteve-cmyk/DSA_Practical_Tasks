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


// i. Insertion at beginning 
void insertAtBeggining (int val) {
    Node * newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}


// ii. Insertion at end
void insertAtEnd(int val) {
    Node * lastNode = new Node();
    lastNode->data = val;
    lastNode->next = NULL;

    if (head == NULL) {
        head = lastNode;
        return;
    }
        Node * temp = head;
        while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = lastNode;

}

// iii. Insertion after a given node
void insertAfterNode (int target, int val) {
    Node* newNode = new Node ();
    newNode->data = val;

    Node* temp = head;
    while(temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main () {
    insertAtBeggining(10);
    insertAtBeggining(20);
    insertAtBeggining(30);

    cout << "Inserting 99 after 20....." << endl;
    insertAfterNode(20, 99);

   cout << "Doom's End Element Insertion...." << endl;

   insertAtEnd(100);
   insertAtEnd(120);
   

   Node* temp = head;
   cout << "Your Train! ";
   while(temp != NULL) {
    cout << temp->data << " -> ";
    temp = temp->next;
   }

   cout << "NULL" << endl;

   


    return 0;
}

