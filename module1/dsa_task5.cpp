// Task 5: Binary Search 

#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 40;
    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high) {
    int mid = low + (high - low) / 2; 

    if (arr[mid] == target) {
        index = mid; 
        break;      
    }
    else if (arr[mid] < target) {
        low = mid + 1; 
    }
    else {
        high = mid - 1; 
    }
}
    if (index != -1) {
        cout << "Element found at Index: " << index << endl;
    } else {
        cout << "Element not found! " << endl;
    }
 return 0;
}