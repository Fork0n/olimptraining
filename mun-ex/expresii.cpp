#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <set>
#include <stack>
using namespace std;

int main() {
    int prc = 0, ppc = 0, pac = 0, n = 0;
    char c;
    stack<char> st;
    string ln;
    ifstream in("expresii.in");
    ofstream out("expresii.out");
    if (in >> n) {
        getline(in, ln);
    } else {
        in.clear();
        in.seekg(0);
    }
    while (getline(in, ln)) {
        bool valid = true;
        istringstream line(ln);
        while (line >> c && valid) {
            switch (c) {
                case '{': case '[': case '(':
                    st.push(c); break;
                case '}':
                    if(st.empty() || st.top() != '{') { valid = false; break; }
                    st.pop();
                    pac++;
                    break;

                case ']':
                    if(st.empty() || st.top() != '[') { valid = false; break; }
                    st.pop();
                    ppc++;
                    break;

                case ')':
                    if(st.empty() || st.top() != '(') { valid = false; break; }
                    st.pop();
                    prc++;
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

/*
 * 100% gata
 * folderul cu in && out este olimptraining/mun-ex/expresii-files
*/