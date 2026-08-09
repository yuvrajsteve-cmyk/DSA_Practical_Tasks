// Task 7: Write a program to evaluate a postfix expression using stacks. 


#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> st;   // for store the digits

    for (int i = 0; i < exp.length(); i++) {
        if (isdigit(exp[i])) {
            st.push(exp[i] - '0');
        }
        else {
            int val1 = st.top(); st.pop(); // for top number
            int val2 = st.top(); st.pop(); // for secomd top number

            switch (exp[i]) {
                case '+' : st.push(val2 + val1); break;
                case '-' : st.push(val2 - val1); break;
                case '*' : st.push(val2 * val1); break;
                case '/' : st.push(val2 / val1); break;
            }
        }
    }

    return st.top();
}

int main () {
    string exp = "231*+";
    cout << "Postfix Expression: " << exp << endl;

    int result = evaluatePostfix(exp);
    cout << "Final Answer: " << result << endl;
    return 0;
}