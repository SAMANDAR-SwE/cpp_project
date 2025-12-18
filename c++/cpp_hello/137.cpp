#include <iostream>
using namespace std;

int main() {
    int qator, ustun, count_q, conut_u;
    cin >> qator;
    
    ustun = qator;
    double matrix[qator][ustun];

    

    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                cin >> matrix[count_q][conut_u];
        }
    }

    int M, n_count = 0;
    cin >> M;
    double summa = 0;
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                if (int(matrix[count_q][conut_u]) % M == 0){
                    n_count ++;
                    summa += matrix[count_q][conut_u];

                }
        }
    }
    cout << summa / n_count;

}