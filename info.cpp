#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int wds = 0, lns = 0, crs = 0;
    string wd;
    char cr;
    string ln;
    ifstream in("input.txt");
    while (in >> wd) {
        wds++;
    }
    in.clear();
    in.seekg(0);
    while (in.get(cr)) {
        crs++;
    }
    in.clear();
    in.seekg(0);
    while (getline(in, ln)) {
        lns++;
    }
    cout << "words : " << wds << endl << "lines : " << lns << endl << "chars : " << crs;
    return 0;
}