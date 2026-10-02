#ifndef QUEUE_H
#define QUEUE_H
#include <deque>
#include <string>


using namespace std;

class TicketCounter {
    private:
        deque<string> cutomerLines;
    public:
        void addCustomer(const string& name);
        void serveCustomer();
        void showLine() const;

};

void runQueueTask();

#endif