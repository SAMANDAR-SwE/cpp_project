#include <iostream>
#include <math.h>
using namespace std;

int main(){
    char text[500];
    cin.getline(text, 500);

    for (int count = 0; text[count] != '\0'; count ++){
        if ((count == 0 || text[count - 1] == ' ') && (text[count] == 'A' || text[count] == 'a')){
            for (int count_o = count; text[count_o] != '\0' && text[count_o] != ' '; count_o ++){
                cout << text[count_o];
        }
        cout << endl;
        }
    }
}
