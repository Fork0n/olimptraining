#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string word, tlw;
    int ll = 0, tl = 0;
    ifstream words("words.txt");
    while (words >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    return 0;
}