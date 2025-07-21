#include <iostream>
#include "P4.h"
#include <queue>
#include <string>
using namespace std;

void question_4(){

}

std::string process_text_by_queue(const std::string& source) {
    std::queue<char> q;
    std::string result;
    
    for (char c : source) {
        if (c == '*') {
            if (!q.empty()) {
                result += q.front();
                q.pop();
            }
        } else {
            q.push(c);
        }
    }
    
    return result;
}
