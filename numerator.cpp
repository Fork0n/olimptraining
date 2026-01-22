#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    for (int i = 1; i > 0; i++) {
        string line;
        if (!getline(in, line)) {
            return 0;
        }
        cout << i << ": " << line << endl;
    }
    return 0;
}