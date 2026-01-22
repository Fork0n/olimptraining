//
// Created by forkosssa on 1/16/2026.
//

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string ln;
    ifstream in("input.txt");
    while (getline(in, ln)) {
    if (!ln.empty()) {
        cout << ln << endl;
    }
    }
    return 0;
}