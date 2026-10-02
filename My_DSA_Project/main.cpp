#include <iostream>
#include "Dsa_Tasks/Linear_Search.h"
#include "OOP_Tasks/errors.h"
#include "OOP_Tasks/array.h"
#include "OOP_Tasks/employee.h"
using namespace std;


int main() {

    int choice;
    cout << "=== DOOM LEVEL DSA APP ===\n";
    cout << "1. Linear Search \n";
    cout << "2. Printer Task (OOP/Errors) \n";
    cout << "3. Array Task (OOP/Array) \n";
    cout << "Chose Any : ";
    cin >> choice;
   


    if (choice == 1) {
        int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int size = sizeof(arr) / sizeof(arr[0]);
        int key;

        cout << "Enter the number: ";
        cin >> key;

        int result = linearSearch(arr, size, key);

        if (result != -1) {
            cout << "Number Position (Index) " << result << " 'on the Index !\n";
        } else {
            cout << "Sorry! Number is not in list \n";
        }
    }
    else if (choice == 2) {
        runPrinterTask();
    } 
    else if (choice == 3) {
        int localArray[] = {10, 20, 30, 40, 50, 60, 70};
        printMyArray(localArray, 7);
    }
    else if (choice == 4) {
        runEmployeeTask();
    }
    else {
        cout << "Wrong Number!\n";
    }


    

    return 0;

}