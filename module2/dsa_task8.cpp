// Task 8: Write a recursive function for Tower of Hanoi problem.

#include <iostream>
using namespace std;

void towerOfHanoi (int n, char source, char destination, char helper) {
    if  (n == 0) {
        return;
    }   

    towerOfHanoi(n -1, source, helper, destination);
    cout << " Move disk " << n << " From rod " << source << " to rod " << destination << endl;
    towerOfHanoi(n - 1, helper, destination, source);
}

int main () {
    int numberOfDisks = 3;
    towerOfHanoi(numberOfDisks, 'A', 'B', 'C');
    return 0;
}