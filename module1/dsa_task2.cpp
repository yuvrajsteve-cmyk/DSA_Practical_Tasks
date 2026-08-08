//  Task 2: Insertion at a Specific Position in an Array 

#include <iostream>
using namespace std;

int main () {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 99;
    int pos = 3; 

    cout << "--- Shifting Start ---" << endl;
    for (int i = n - 1; i >= pos; i--) {
        cout << "Moving value " << arr[i] << " from Index " << i << " to Index " << (i + 1) << endl;
        arr[i + 1] = arr[i];
    }

   
    arr[pos] = element;
    n++; 

    cout << "\n--- Final Array Structure with Memory Addresses ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index [" << i << "] | Value: " << arr[i] 
             << " | RAM Address: " << &arr[i] << endl;
    }

    cout << "\nBase Address of Array (arr): " << arr << endl;

    return 0;
}