#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
    char text[500];
    cin.getline(text, 500);

    
    int len = strlen(text);
    int summa = 0;
    for (int count = 0; count <= len; count ++){
        cout << text[count] << endl;
        if (text[count] >= '0' && text[count] <= '9') {
            summa += text[count] - '0';    // '5' → 5
        }
    }
        cout << summa << endl;

}
