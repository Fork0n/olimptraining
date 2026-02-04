#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string ln;
    ifstream in("catalogul.in");
    ofstream out("catalogul.out");
    int n, cl, nr;
    double gr;
    vector<pair<int, int>> clNr;
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> cl >> nr >> gr;
        if (gr >= 9 && cl > 4 && cl < 13) {
            clNr.push_back({ cl, nr });
        }
    }
    sort(clNr.begin(), clNr.end());

    int ccl = -1;
    bool ficl = true;

    for (const auto& c : clNr) {
        if (c.first != ccl) {
            if (ccl != -1) {
                out << endl;
            }
            out << c.first << endl;
            ccl = c.first;
            ficl = true;
        }
        if (!ficl) {
            out << " ";
        }
        out << c.second;
        ficl = false;
    }
    out << endl;
    return 0;
}