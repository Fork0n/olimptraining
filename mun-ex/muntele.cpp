#include <iostream>
#include <fstream>
using namespace std;

long long pv(int x) {
    long long a = 1, b = 1;
    if (x == 1) return 1;
    for (int i = 2; i <= x; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    ifstream in("muntele.in");
    ofstream out("muntele.out");
    int n = 0;
    bool done = false;
    if (!(in >> n) || n < 1 || n > 45) {
        cerr << "N pare sa nu fie un numar intreg natural nenul, mai mare sau egal cu 1 si mai mic sau egal cu 45" << endl;
        return 1;
    }
    cout << "N = " << n << " si este un numar intreg natural nenul" << endl;
    cout << "variante posibile: " << pv(n) << endl;
    out << pv(n);
    return 0;
}

/*
 * acest cod e gata 100%, e verbose
 * la baza are programul de generare la Fibonacci sequence (fib.cpp)
 * folderul cu in && out este olimptraining/mun-ex/muntele-files
 */