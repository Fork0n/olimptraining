#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream nums("numbers.txt");
    int num;
    while (nums >> num) {
        if (num % 2 == 0) {
            cout << num << " ";
        }
    }
    return 0;
}