#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ofstream out("piese.out");
    ifstream in("piese.in");
    unsigned long long n = 0, m = 0, k = 0, ans = 0, tmp = 0;
    if (in >> n >> m >> k && n >= 1 && n <= pow(10, 9) && m >= 1 && m <= pow(10, 9) && k > 1 && k <= n) {
        while (n > 0) {
            ans += n * m;
            tmp += n;
            n = tmp / k;
            tmp = tmp % k;
        }
        out << ans;
    } else {
        cerr << "input gresit!";
        return 1;
    }
    return 0;
}