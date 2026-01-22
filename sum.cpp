#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream nums("numbers.txt");
    for (int i = 1; i > 0; i++) {
        int num, sum, ord = 1;
        while (nums >> num) {
            cout << ord++ << ": " << num << endl;
            sum += num;
        }
        cout << "sum: " << sum << endl;
        return 0;
    }
}