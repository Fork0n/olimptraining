#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <strstream>
using namespace std;

int main() {
    string ln, fnm, lnm, ll;
    int n = 0, kwv = 0;
    double med = 0;
    stack<string> st, ts;
    ifstream in("energie.in");
    ofstream out("energie.out");
    in >> n;
    while (getline(in, ln)) {
        istringstream line(ln);
        if (line >> fnm >> lnm >> kwv) {
            med += kwv;
            ll = fnm + " " + lnm + " " + to_string(kwv);
            st.push(ll);
        }
    }
    out << med / n << endl;
    while (!st.empty()) {
        ts.push(st.top()); st.pop();
    }
    while (!ts.empty()) {
        out << ts.top() << endl; ts.pop();
    }
    return 0;
}