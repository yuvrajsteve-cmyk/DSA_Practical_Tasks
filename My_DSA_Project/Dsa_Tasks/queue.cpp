#include "queue.h"
#include <iostream>
#include <string>
#include <deque>


using namespace std;

void TicketCounter::addCustomer(const string& name) {
    cutomerLines.push_back(name);
}

void TicketCounter::serveCustomer() {
    if (!cutomerLines.empty()){
        cutomerLines.pop_front();
    } else {
        cout << "No customers in Line! " << endl;
    }
}

void TicketCounter::showLine() const {
    for (const auto& customer: cutomerLines) {
        cout << customer << endl;
    }
}

void runQueueTask() {
    TicketCounter counter;
    counter.addCustomer("yuvraj Singh");
    counter.addCustomer("Satinderpal Singh");
    counter.addCustomer("Jasspreet Singh");
    counter.addCustomer("Hithes Sir");

    cout << "==============================" << endl;

    counter.showLine();

    cout << "==============================" << endl;

    counter.serveCustomer();
};