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

void insertAtBeginning(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void traverseList() {
    Node* temp = head;
    cout << "Your Train: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteFromBegining() {
    if (head == NULL) {
        cout << "This is also empty , nothing can be deleted! " << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromEnd() {
    if (head == NULL) {
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// iii. Deletion after a given node 
void deleteAfterNode (int target) {
    if(head == NULL) return;

    Node* temp = head;
    
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    } 

    if (temp != NULL && temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
}

int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtBeginning(40);
    insertAtBeginning(50);
    
    cout << "--- Original Train ---" << endl;
    traverseList(); 

    cout << "\nDeleting from beginning..." << endl;
    deleteFromBegining();
    traverseList(); 

    cout << "\nDeleting from end..." << endl;
    deleteFromEnd();
    traverseList(); 

    cout << "\nDeletion after a given node...." << endl;
    deleteAfterNode(30);
    traverseList();

    return 0;
}
