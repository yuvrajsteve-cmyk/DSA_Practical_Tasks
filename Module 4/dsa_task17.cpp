// Task 17:Program to sort an array of integers in ascending order using quick sort. 

#include <iostream>
using namespace std;


int partition (int arr[], int low, int high) {
    int povit = arr[low];
    int i = low + 1;
    int j = high;

    while(i <= j) {
        while(i <= high && arr[i] <= povit){
            i++;
        }
        while(arr[j] > povit) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    if (low < j) {
        swap(arr[low], arr[j]);
    }

    return j;
}

void quickSort (int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main () {
    int arr[] = {12, 5, 23, 2, 16};
    int n = 5;

    quickSort(arr, 0, n-1);

    cout << "Sortrd Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;



    return 0;
}