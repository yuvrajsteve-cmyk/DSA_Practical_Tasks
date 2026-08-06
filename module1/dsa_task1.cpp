#include <iostream> // for printing content on the screen
using namespace std; 


// Title: Array Insertion (End and Position)

int main () {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; // length

    int pos = 1; // index element want to delete
    
    cout << "This is the first Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = pos; i < n - 1; i ++) {
        arr[i] = arr[i + 1];
    }
    n--;


    // Title: Array Deletion (By Value or Position) 

    cout << "This is the second Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}