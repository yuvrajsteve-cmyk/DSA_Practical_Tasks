
// 🚀 Task 1: Array Implementation and Traversal (1D Array) 

#include <iostream>
using namespace std;

int main () {
    int doom_data[5] = {11, 22, 33, 44, 55}; // it takes 20 bytes

    cout << "------Doom's Memory Map------ " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Index [" << i << "] | Value: " << doom_data[i]
             << " | Ram Address: " << &doom_data[i] << endl;
    }

    return 0;
}