

#include <iostream>
using namespace std;

class ArrayOperations {
    public:
        int hieght (int arr[], int n, int max_hieght) {
            for (int i = 0; i < n; i++) {
                if(arr[i] > max_hieght) {
                    max_hieght = arr[i];
                }
            }
            cout << "No Hieght Found: ";
            return max_hieght;
        }
};

int main () {
    int hightes[5] = {1200, 2500, 1800, 3100, 2200};
    int max_height = hightes[0];

    ArrayOperations Hii;
    int result = Hii.hieght(hightes, 5, max_height);

    cout << "Hight Found: " << result << endl;

    return 0;
}