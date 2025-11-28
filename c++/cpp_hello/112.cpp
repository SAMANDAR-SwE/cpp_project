
#include <iostream>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    double list[n_son];

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    double summa_toq = 1,summa_juvt = 0;
    for (count = 0; count < n_son; count++){
        if ((count + 1)%2 == 1){
            summa_toq *= list[count];
        }
        else{
            summa_juvt += list[count];
        }       
    }
     printf("%.2f\n", (summa_toq / summa_juvt));
    
    
}
