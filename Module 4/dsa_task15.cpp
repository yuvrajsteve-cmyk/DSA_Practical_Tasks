// Task 15:Program to sort an array of integers in ascending order using selection sort.  

#include <iostream>
using namespace std;

int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 121};
int low = 0;
int high = 10;
int target = 121;

int main () {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            int result = mid;
            cout << "Found it: " << result << endl;
            break;
        } else if (target < arr[mid]) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }

    if (low > high) {
        cout << "Element not Exist!";
    }

    return 0;
}