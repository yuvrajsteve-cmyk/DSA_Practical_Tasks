#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee (const Employee& emp) {
    cout << "ID " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}


void runEmployeeTask() {
    
    vector<Employee> employees = {
        {101, "Yuvraj", 100000}, 
        {102, "Satinder", 10000},
        {103, "Jass", 10000},
        {104, "Nasreen", 100000},
        {105, "Karan", 10000},
    };

    sort(employees.begin(), employees.end(), [] (const Employee& e1, const Employee& e2) {
        return e1.salary > e2.salary;
    });

    cout << "Employees Sorted by Salary -> Highest to Lowest \n";
    cout << "============================================" << endl;

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employees.begin(), 
            employees.end(), 
            back_inserter(highEarners),
            [] (const Employee& e) {
        return e.salary >= 100000;
    });

    cout << "================================" << endl;
       cout << "Employees Who are High Earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

   double totalSalary =  accumulate(employees.begin(), employees.end(), 0.0, [] (double sum, const Employee& e) {
        return sum + e.salary;
    });

    double avaerageSalary = totalSalary / employees.size();

    auto highestPaid =  max_element (employees.begin(), employees.end() , [] (const Employee& e1, const Employee& e2) {
        return e1.salary < e2.salary;
    });
}