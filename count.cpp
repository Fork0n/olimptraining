#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main() {
    string wrd;
    set<string> words;
    ifstream text("text.txt");
    while (text >> wrd) {
        words.insert(wrd); // duplicates automatically ignored
    }
    text.clear();
    text.seekg(0);
    while (text >> wrd) {
        if (words.find(wrd) != words.end()) {
            cout << wrd << endl;
        }
    }
    cout << "Unique words count: " << words.size() << endl;
    return 0;

}