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

    double vector[ustun];
    for (conut_u = 0; conut_u < ustun; conut_u++){
        double sum = 0;
        for (count_q = 0; count_q < qator; count_q++){
            sum += matrix[count_q][conut_u]; 
        }
        vector[conut_u] = sum;
    }


    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
            cout << matrix[count_q][conut_u] << " ";
        }
        cout << endl;
    }

    
    for (conut_u = 0; conut_u < ustun; conut_u++){
        cout << vector[conut_u] << " ";
    }

    return 0;
}


