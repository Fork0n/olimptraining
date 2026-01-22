//
// Created by forkosssa on 1/16/2026.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string lnA, lnB, lnE;
    ifstream inA("A.txt");
    ifstream inB("B.txt");
    while (getline(inA, lnA) || getline(inB, lnE)) {
        getline(inB, lnB);
        cout << lnA << " " << lnB << endl;
    }
    return 0;
}