#ifndef ERRORS_H
#define ERRORS_H

#include <string>

class Printer {
private:
    std::string _name;
    int availablePaper;

public:
    Printer(std::string name, int paper);
    void Print(std::string textDoc, int requiredPaper);
};


void runPrinterTask();

#endif
