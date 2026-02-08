#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n_ustun, n_qator, count_q, count_u;
    cin >> n_qator >> n_ustun;
    double matrix[n_qator][n_ustun];

    for (count_q = 0; count_q < n_qator; count_q++){
        for (count_u = 0; count_u < n_ustun; count_u++){
            cin >> matrix[count_q][count_u];
        }
    }

}