#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string current = "";  // hozirgi so‘z
    string longest = ""; // eng uzun so‘z

    for (char c : s) {
        if (c != ' ') {
            current += c;

        }
        
    }
    
    return 0;
}
