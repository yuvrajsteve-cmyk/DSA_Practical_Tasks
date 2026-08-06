#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50, 60}; //elements in the array
    int n = 6; // length of the array
    int target = 40;

    // add binary search 
    int low = 0;
    int high = n -1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << "value of mid is: " << mid << endl;

        if (arr[mid] == target) {
            foundIndex = mid;
            cout << "value is here "<< arr[mid] << endl;
            cout << "value of fundIndex "<< foundIndex << endl;
            break;
        } else if (arr[mid] < target) {
            cout << "value here is " << arr[mid] << endl;
            low = mid + 1;
        } else {
            high = mid -1;
            cout << "value here is " << high << endl;
        }
    }

    if (foundIndex != -1) {
        cout << " Binary Search: Element found it " << foundIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }
}