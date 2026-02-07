#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){

    int count_q, count_u, qator, ustun;

    cin >> qator >> ustun; 

    double matrix[qator][ustun];


    for (count_q =  0; count_q < qator ; count_q ++){
        for (count_u = 0 ; count_u < ustun; count_u ++){
            cin >> matrix[count_q][count_u];
        }
    }
    int maxs = matrix[0][0];
    for (count_q = 0; count_q < qator ; count_q ++){
            if (matrix[count_q][count_q] > maxs){
                maxs = matrix[count_q][count_q];

            }
        
        }
    cout << maxs << endl;
     

}
