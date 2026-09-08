

#include <iostream>
using namespace std;

class SearchMachine {
    public: 
    int linearSearch (int arr[], int n, int target){
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        cout << "Not found: " ;
        return -1;
    }
};

int main () {
    int arr[10] = {10, 23, 32, 56, 78, 65, 56, 34, 23, 90};

    SearchMachine sear;
    int result = sear.linearSearch(arr, 5, 40);

    cout << "The liner Search is : " << result << endl;


    return 0;
}