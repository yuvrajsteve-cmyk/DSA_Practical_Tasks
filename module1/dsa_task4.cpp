// Task 4: Linear Search 

#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 40;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
        if (index != -1) {
            cout << "Element found at Index: " << index << endl;
        } else {
            cout << "Element not found!" << endl;
        }
    return 0;
}