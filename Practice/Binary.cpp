

#include <iostream>
using namespace std;

class InverseBinarySearch {
    public:
        int search(int arr[], int n, int target) {
            int start = 0;
            int end = n - 1;
            

            while(start <= end) {
                int mid = start + (end - start) / 2;

                if (arr[mid] == target) {
                    return mid;
                }
                else if (arr[mid] < target) {
                    end = mid - 1;
                }
                else if (arr[mid] > target) {
                    start = mid + 1;
                }
            }
            return -1;
        }
};

int main () {
    int hightes[10] = {3100, 2500, 2200, 1800, 1200, 1100, 900, 750, 630, 440};
    int n = 5;

    InverseBinarySearch hii;
    int result = hii.search(hightes, 10, 630);

    cout << "The result is: " << result << endl;

    return 0;
}