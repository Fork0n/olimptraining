#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string word, tlw;
    int ll = 0, tl = 0;
    ifstream words("words-of-wisdom.txt");
    while (words >> word) {
        ll = word.length();
        cout << "word: " << word  << "lenght : " << ll << endl;
        if (ll > tl) {
            tlw = word;
            tl = ll;
        }
    }
    cout << endl << "longest word: " << tlw << endl;
    return 0;
}