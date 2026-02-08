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
    
    int inx_qator = 0, inx_ustun = 0;
    for (count_q =  0; count_q < qator ; count_q ++){
        for (count_u = 0 ; count_u < ustun; count_u ++){
            if(matrix[count_q][count_u] < 0){
                inx_qator += count_q, inx_ustun += count_u;
            }
        }
    }

    
    for (count_q = 0; count_q < qator; count_q++){
        if (count_q != inx_ustun){
            for (count_u = 0; count_u < ustun; count_u++){
                if (count_u != inx_qator){
                    cout << matrix[count_q][count_u] << " "; 
                } 

            }
        cout << endl;
        }
        

            
    }

    

    

}