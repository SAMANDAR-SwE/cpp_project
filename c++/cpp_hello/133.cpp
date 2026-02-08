#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n_son, count_q, count_u;
    cin >> n_son;
    double matrix1[n_son][n_son];
    double matrix2[n_son][n_son];

    for (count_q = 0; count_q < n_son; count_q++){
        for (count_u = 0; count_u < n_son; count_u++){
            cin >> matrix1[count_q][count_u];
        }
    }

    for (count_q = 0; count_q < n_son; count_q++){
        for (count_u = 0; count_u < n_son; count_u++){
            cin >> matrix2[count_q][count_u];
        }
    }

    cout << endl;

    for (count_q = 0; count_q < n_son; count_q++){
        for (count_u = 0; count_u < n_son; count_u++){
            cout << matrix1[count_q][count_u] << " ";
        
        }
        
        for (count_u = 0; count_u < n_son; count_u ++){
            cout << matrix2[count_q][count_u] << " ";
        }
        cout << endl;
    }



    
    
}
