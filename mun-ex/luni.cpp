#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <set>
using namespace std;

int main() {
    ifstream in("luni.in");
    ofstream out("luni.out");
    int n = 0,mmtic = 20, amtic = 0; //mmtic - min/max temp in C(elsius); amtic - average month temp in C(elsius)
    char cf;
    set<string> lunile = {"ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august", "septembrie", "octombrie", "noiembrie", "decembrie"};
    string luna, ln;
    getline(in, ln);
    istringstream instr(ln);
    if (!(instr >> cf >> mmtic)) {
        cerr << "line 1 nu contine ''criteriul filtrarii'' sau nu contine ''valoare pentru filtrare''" << endl;
        return 1;
    }
    if (mmtic < -42 || mmtic > 42) {
        cerr << "temperatura atrebuie sa fie intre -42C si 42C" << endl;
        return 1;
    }
    getline(in, ln);
    istringstream infn(ln);
    if (!(infn >> n)) {
        cerr << "line 2 nu contine ''n''" << endl;
        return 1;
    }
    if (n <1 || n > pow(10, 5)) {
        cerr << "valoarea n trebuie sa fie intre 1 si 10^5" << endl;
        return 1;
    };
    cout << "criteriul filtrarii este: " << cf << " si valoarea pentru filtrare este: " << mmtic << endl << "luni in lista: " << n << endl; //debug
    while (getline(in, ln)) {
        istringstream line(ln);
        if (line >> luna >> amtic && lunile.contains(luna)) {
            switch (cf) {
                case '>': if (amtic > mmtic) {out << luna << endl; cout << luna << endl; /*cout e debug */} break;
                case '<': if (amtic < mmtic) {out << luna << endl; cout << luna << endl; /*cout e debug */} break;
            }
        }
    }
    return 0;
}

/*
 * acest cod e gata 100%, e verbose
 * folderul cu in && out este olimptraining/mun-ex/luni-files
 * testat cu ambele cazuri de pe fisa
 * depistata o problema: in exemplu merge august, ianuarie, mai si outputul e "mai august";
 * la mine in cod cu tot acelasi input outputul e "august mai" in ordinea din input;
 * necesita C20
 */