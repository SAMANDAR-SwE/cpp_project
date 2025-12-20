#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[500];
    cin.getline(text, 500);

    int len = strlen(text);   

    for (int count = len - 1; count >= 0; count--) {
        cout << text[count];
    }

    return 0;
}
