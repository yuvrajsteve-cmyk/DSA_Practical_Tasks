#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 25, 30, 45, 50};  //boxes
    int n = 5; // length of the boxes
    int target = 45; // this element we need to findout
    int foundIndex = -1; // suppose! in starting we dont found it
    

    // here is start the logic to check all the boxes one by one like linera search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    // show the result
    if (foundIndex != -1) {
        cout << "Element fount it:" << foundIndex << endl;
    } else {
        cout << "Element is not in the list" << endl;
    }

    return 0;
}