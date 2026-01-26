#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    string natija = "";

    for (char c : s) {
        if (c != '.')
            natija += c;
    }

    cout << natija;

}