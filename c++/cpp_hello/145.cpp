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

    double vector[qator];
    for (count_q = 0; count_q < qator; count_q++){
        int sum = 0;
        for (conut_u = 0; conut_u < ustun; conut_u++){
            sum += matrix[conut_u][count_q];
        }
        vector[count_q] = sum;
    }
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                cout << matrix[count_q][conut_u] << " ";
        }
        cout << vector[count_q] << " ";
    }


    
    

    

}