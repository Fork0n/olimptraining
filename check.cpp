//
// Created by forkosssa on 1/15/2026.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream list("list.txt");
    if (!list.is_open()) {
        cerr << "Error: Could not open list.txt" << endl;
        return 1;
    }
    for (int i = 1; i > 0; i++) {
        string line;
        if (!getline(list, line)) {
            cout << "end" << endl;
            break;
        }
        if (line == "nigger") {
            cerr << "woah, racial slurs are not allowed!" << endl;
            cerr << "found on line " << i << endl;
            break;
        }
        cout << line << endl;
    }
    return 0;
}