
#include <iostream>
#include "P3.h"
#include <stack>
#include <string>
using namespace std;

void question_3(){

}

std::string process_text_by_stack(std::string source) {
    std::stack<char> st;
    std::string result;
    
    for (char c : source) {
        if (c == '*') {
            if (!st.empty()) {
                result += st.top();
                st.pop();
            }
        } else {
            st.push(c);
        }
    }
    
    return result;
}
