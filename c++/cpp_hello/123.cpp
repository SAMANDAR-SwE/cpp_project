#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<double> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];

    }
    double summa_juft = 0;
    for (count = 0; count < n_son; count++){
        if (count % 2 == 0){
            summa_juft += list[count];
        }
    }

    double summa = 0;
    for (count = 0; count < n_son; count++){
        if ( ((int)list[count]) % 2 == 1){
            list[count] = (list[count] / summa_juft);

        }
        printf("%.2f ", (double)list[count]);
    }

        
}

    
    
    
    
