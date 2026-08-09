// Task 6: Write a program to convert an infix expression to a postfix expression using stacks. 

#include <iostream>
#include <stack>   
#include <string>  
using namespace std;


int priority(char c) {
    if (c == '^' ) {
        return 3; // most powerful
    }
    if (c == '*' || c == '/' ) {
        return 2;
    } 
    if (c == '+' || c == '-' ) {
        return 1; // weak
    }
    return -1; // no operator
}

void infixToPostfix(string s) {
    stack<char> st; 
    string result;  

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            result += c; 
        }
        else if (c == '(') {
            st.push('('); 
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top(); 
            }
            if (!st.empty()) {
                st.pop();
            }
        }
        else {
            while (!st.empty() && priority(c) <= priority(st.top())) {
                result += st.top(); 
                st.pop();
            }
            st.push(c); 
        }
    }

   
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    
    cout << "Postfix Expression: " << result << endl;
}

int main() {
    string exp = "A+B*C"; 
    cout << "Infix Expression: " << exp << endl;
    
   
    infixToPostfix(exp); 
    
    return 0;
}
