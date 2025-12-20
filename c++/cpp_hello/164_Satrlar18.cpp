#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char text[500];
    cin.getline(text, 500);

    int count_unli = 0,L,R;
    cin >> L >> R;

    if(L < R){
        for (int count = 0; text[count] != '\0'; count ++){
            if (count >= L - 1 && count < R){
                cout << text[count];
            }
        }
    }
    else if (L > R){
        for (int count = 0; text[count] != '\0'; count ++){
            cout << text[count];
        }
    }
}