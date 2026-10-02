#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <list>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <ctime> 

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

void runContainerTask () {
   
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "Coffe Maker", "Kithcen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");
    recentCustomers.push_front("C000");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;

    for (const auto &product: products){
        categories.insert(product.category);
    }

    map<int , int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order: orderHistory) {
        customerOrders.insert({order.customerID, order});
    };

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Yuvraj"},
        {"C003", "Satinder"},
        {"C004", "Jass"},
        {"C005", "Jakaran"},
    };

    unordered_set<int> uniqueProductIDs;

    for (const auto &product: products) {
        uniqueProductIDs.insert(product.productID);
    }

    cout << "========================================" << endl;
    
    cout << "--- Categories Found ---" << endl;
    for (const auto &cat : categories) {
        cout << cat << endl;
    }

    cout << "========================================" << endl;
    
    cout << "\n--- Recent Customers (Deque) ---" << endl;
    for (const auto &customer : recentCustomers) {
    cout << customer << endl;
    }

    cout << "\n--- Product Stock (Map) ---" << endl;
    for (const auto &pair : productStock) {
    cout << "Product ID: " << pair.first << " | Stock: " << pair.second << endl;
    }

    cout << "========================================" << endl;
    
    cout << "\n--- Customer Data (Unordered Map) ---" << endl;
    for (const auto &pair : customerData) {
    cout << "ID: " << pair.first << " -> Name: " << pair.second << endl;
    }
    cout << "========================================" << endl;
    
    cout << "\n--- Order History (List of Structs) ---" << endl;
    for (const auto &order : orderHistory) {
    cout << "Order ID: " << order.orderID << " | Product ID: " << order.ProductID << " | Qty: " << order.quantity << " | Customer: " << order.customerID << endl;
    }
}