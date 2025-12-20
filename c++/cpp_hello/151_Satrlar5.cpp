#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char text[500];
    cin.getline(text, 500);

    int count_unli = 0;

    for (int count = 0; text[count] != '\0'; count ++){
        if ((text[count] == 'A' || text[count] == 'a' || 
             text[count] == 'O' || text[count] == 'o' || 
             text[count] == 'I' || text[count] == 'i' || 
             text[count] == 'U' || text[count] == 'u' || 
             text[count] == 'E' || text[count] == 'e')){
            count_unli ++;
        }
        
    }
    cout << count_unli << endl;
    
}
