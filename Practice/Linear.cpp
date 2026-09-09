


#include <iostream>
using namespace std;

class Reverse {
    public:
        int Count(int arr[], int n, int start, int end){
            for (int i = end; i < n; i++) {
                if (start < end) {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
            }
            return start;
        }
};


int main () {
    int arr[5] = {10, 23, 32, 56, 78};
    int n = 5;
    int start = 0;
    int end = n - 1;

    Reverse Number;
    int result = Number.Count(arr, n, start, end);

    cout << "The Result is: " << result << endl;

    return 0;
}