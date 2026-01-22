#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("cadoul.in");
    ofstream out("cadoul.out");
    int x = 0, y = 0;
    if (!(in >> x >> y)) {
        cerr << "line 1 sau 2 contine un string sau nu contin un int" << endl;
        return 1;
    }
    if (x < 0 || y < 0 || x > 100 || y > 18) {
        cerr << "varsta este mai mare ca 18 ani sau cadoul de baza e mai mare de 100 eur" << endl;
    }
    int sum = 0, euth = 0, age = 0;
    bool r = false;
    if (y == 1) {
        out << x * 2 + 1 << endl << 0 << endl;
        return 0;
    }
    sum = x * 2 + 1;
    cout << 0 << ": " << sum << ", " << age << endl; //debug
    for (int i = 2; i <= y; i++) {
        age = i;
        sum = (sum * 2) + age;
        if (sum >= 1000 && r != true) {
            r = true;
            euth = i;
        }
        cout << i << ": " << sum << ", " << age << endl; //debug
    }
    cout << "output: " << sum << ", " << euth << endl; //debug
    out << sum << endl << euth << endl;
}

/*
 * acest cod e gata 100%, e verbose
 * are hardcode output pt y == 1 dar nu e esential
 * folderul cu in && out este olimptraining/mun-ex/cadoul-files
 * testat cu ambele cazuri de pe fisa
 */