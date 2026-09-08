

#include <iostream>
using namespace std;

class Numbers {
    public:
        int Number(int arr[], int n, int target, int count) {
            for(int i = 0; i < n; i++){
                if (arr[i] == target){
                    count++;
                }
            }
            return count;
        }
};


int main () {
    int arr[5] = {10, 23, 10, 56, 10};
    int count = 0;

    Numbers num;
    int result = num.Number(arr, 5, 23, count);
    cout << "The Number is: " << result << endl;

    return 0;
}