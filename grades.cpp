#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string ln, name;
    int grade = 0, cnt = 0, prt = 0, avg = 0;
    ifstream grades("register.txt");
    while (getline(grades, ln)) {
        istringstream line(ln);
        if (line >> name) {
            cout << name << " : ";
            while (line >> grade) {
                cout << grade << " ";
                prt += grade;
                cnt++;
            }
            avg = prt / cnt;
            cout << endl << "avg : " << avg << endl;
        }
    }
    return 0;
}