// Task 3: Deletion from a Specific Position in an Array 

#include <iostream>
using namespace std;

int main() {  // -5  -4  -3  -2  -1
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5; // 0   1   2   3   4  
    int pos = 2;

    for (int i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
     
    }
    n--;
    for (int i = 0; i < n; i++) {
        cout << "Index ["<< i <<"] | Value: " << arr[i]
        << " | Ram Address: " << &arr[i] << endl;
    }
    return 0;
}