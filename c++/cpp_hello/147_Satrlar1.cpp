#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char strings[500];
    cin >> strings;
    int count_A = 0, count_Y = 0;
    for (int count = 0; strings[count] != '\0'; count ++){
        if (strings[count] == 'A'){
            count_A ++;
        }
        else if (strings[count] == 'Y'){
            count_Y ++;
        }
    }
    cout << count_A << endl << count_Y << endl;
}
