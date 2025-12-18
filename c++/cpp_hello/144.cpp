#include <iostream>
using namespace std;

int main() {
    int qator, ustun, count_q, conut_u;
    cin >> qator >> ustun;
    
    double matrix[qator][ustun];

    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                cin >> matrix[count_q][conut_u];
        }
    }
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
            for (int count_u_2 = conut_u ++; count_u_2 < ustun; count_u_2++){
                if (matrix[count_q][conut_u] < matrix[count_q][count_u_2]){
                    double temp = matrix[count_q][conut_u];
                    matrix[count_q][conut_u] = matrix[count_q][count_u_2];
                    matrix[count_q][count_u_2] = temp;
                }
            }
        }
    }

    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                cout << matrix[count_q][conut_u] << " ";
        }
        cout << endl;    
    }

}