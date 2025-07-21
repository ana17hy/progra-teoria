
#include <iostream>
#include "P5.h"
#include <stack>
#include <string>
using namespace std;

void question_5(){

}

bool is_equation_balanced(std::string source) {
    std::stack<char> st;

    for (char c : source) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        } else if (c == ']') {
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        } else if (c == '}') {
            if (st.empty() || st.top() != '{') return false;
            st.pop();
        }
    }

    return st.empty();
}
