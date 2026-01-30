#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string matn;

    getline(cin, matn);
    int summa = 0;
    for(int count = 0; count < matn.length(); count ++ ){
        summa += (matn[count] - '0');
    }
    cout << summa << endl; 
    
}
