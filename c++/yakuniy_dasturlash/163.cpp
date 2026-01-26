#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // butun matnni o‘qish

    for (char &c : s) {
        if (c >= 'a' && c <= 'z') {
            c = c - 32;   // kichik → katta
        }
        else if (c >= 'A' && c <= 'Z') {
            c = c + 32;   // katta → kichik
        }
    }

    cout << s;
    return 0;
}
