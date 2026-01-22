#include <fstream>
#include <iostream>
using namespace std;

int main() {
    unsigned long long one = 1, two = 0, temp = 0;
    ofstream out("output.txt");
    {
        for (int i = 0; i <= 100; i++) {
            temp = one;
            one = two;
            two = temp + one;
            out << i << ": " << one << endl;
        }
    }
    return 0;
}
