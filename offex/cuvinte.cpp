#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ifstream in("cuvinte.in");
    ofstream out("cuvinte.out");
    string ln;
    int n;
    in >> n;
    in.ignore();
    if (n < 0 || n > 100) {
        return 1;
    }
    vector<pair<string, int>> ws;
    for (int i = 0; i < n; i++) {
        string word;
        getline(in, word);

        bool clow = false, cupr = false;
        int score = word.length();

        for (char c : word) {
            if (isupper(c)) {
                cupr = true;
            }
            if (islower(c)) {
                clow = true;
            }
        }
        if (cupr) {
            score++;
        }
        if (clow) {
            score++;
        }
        ws.push_back({word, score});
    }
    string bwd;
    int ms = -1;
    for (const auto& w : ws) {
        bool hu = false, hl = false;
        for (char c : w.first) {
            if (isupper(c)) {hu = true;}
            if (islower(c)) {hl = true;}
        }

        if (hu && hl) {
            int lng = w.first.length();
            if (lng > ms) {
                ms = lng;
                bwd = w.first;
            }
        }
    }
    out << bwd;

    // while (getline(in, ln)) {
    //     istringstream line(ln);
    //     char c;
    //     stack<char> st;
    //     words.insert(ln);
    //     while (line >> c) {
    //         st.push(c);
    //     }
    //     while (!st.empty()) {
    //         if (isupper(st.top()) && !clow) {
    //             clow = true;
    //             score++;
    //         }
    //         if (islower(st.top()) && !cupr) {
    //             cupr = true;
    //             score++;
    //         }
    //         score++;
    //         scores.insert(score);
    //         st.pop();
    //     }
    // }
}