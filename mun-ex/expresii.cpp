#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <set>
#include <stack>
using namespace std;

int main() {
    int prc = 0, ppc = 0, pac = 0;
    char c, top;
    stack<char> st;
    string ln;
    ifstream in("expresii.in");
    ofstream out("expresii.out");
    while (getline(in, ln)) {
        bool valid = true;
        istringstream line(ln);
        while (line >> c && valid) {
            switch (c) {
                case '{': case '[': case '(':
                    st.push(c); break;
                case '}':   // curly braces
                    if(st.empty() || st.top() != '{') { valid = false; break; }
                    st.pop();
                    pac++;   // {} counter
                    break;

                case ']':   // square brackets
                    if(st.empty() || st.top() != '[') { valid = false; break; }
                    st.pop();
                    ppc++;   // [] counter
                    break;

                case ')':   // round brackets
                    if(st.empty() || st.top() != '(') { valid = false; break; }
                    st.pop();
                    prc++;   // () counter
                    break;
            }
        }
        if (!st.empty())
            valid = false;
        if (valid) {
            out << "DA (" << prc << ") [" << ppc << "] {" << pac << "}" << endl;
        } else {
            out << "NU" << endl;
        }
        prc = ppc = pac = 0;
        while (!st.empty()) st.pop();
    }
    return 0;
}