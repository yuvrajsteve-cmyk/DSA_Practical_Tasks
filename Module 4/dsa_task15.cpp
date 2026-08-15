// Task 15:Program to sort an array of integers in ascending order using selection sort.  

#include <iostream>
using namespace std;

int main () {

    int arr[] = {20, 10, 50, 12, 30, 23, 26, 56, 43, 654, 345, 344, 344};
    int n = 13;

    for (int i = 0; i < n - 1; i++) {
        
        int min_idx = i;
        cout << min_idx << endl;

        for (int j = i + 1; j < n; j ++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}