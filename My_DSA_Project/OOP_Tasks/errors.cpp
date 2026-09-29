#include <iostream>
#include <string>
#include "errors.h"
using namespace std;

Printer::Printer(string name, int paper) {
    _name = name;
    availablePaper = paper;
}

void Printer::Print(string textDoc, int requiredPaper) {
    if (requiredPaper > availablePaper) {
        throw 
            "Error: Not Enough Paper!";
        
    }

    cout <<"Printing........." << textDoc << endl;
}

void runPrinterTask() {
     Printer myPrinter("HP Pro Desk", 15);

    try {
       myPrinter.Print("HP Pro Desk", 10);
    }
    catch (const char* error_message) {
        cout << error_message;
    };


    cout << "\nPress Enter to Continue...";
    cin.ignore();
    cin.get();
}