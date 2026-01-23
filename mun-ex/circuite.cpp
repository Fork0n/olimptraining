#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <set>
#include <stack>
using namespace std;

int main() {
    ifstream in("circuite.in");
    ofstream out("circuite.out");
    string ln;
    char cr;
    int n = 0;
    if (in >> n) {
        getline(in, ln);
    } else {
        in.clear();
        in.seekg(0);
    }
    while (getline(in ,ln)) {
        cout << ln << endl;
    }
    return 0;
}