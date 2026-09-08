

#include <iostream>
using namespace std;

class ArrayOperations {
    public:
        int hieght (int arr[], int n, int target) {
            for (int i = 0; i < n; i++) {
                if(arr[i] == target) {
                    return i;
                }
            }
            cout << "No Hieght Found: ";
            return -1;
        }
};

int main () {
    int hightes[5] = {1200, 2500, 1800, 3100, 2200};

    ArrayOperations Hii;
    int result = Hii.hieght(hightes, 5, 2200);

    cout << "Hight Found: " << result << endl;

    return 0;
}