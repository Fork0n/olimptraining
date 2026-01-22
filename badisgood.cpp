#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string wrd;
    ifstream bad("bad.txt");
    while (bad >> wrd) {
        if (wrd == "bad") {
            wrd = "good";
        }
        cout << wrd << " ";
    }
    return 0;
}