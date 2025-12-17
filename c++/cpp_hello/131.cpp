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
        vector[count_q] = sum;
        }
    }
    
    for (int count = 0; count< qator; count++){
        cout << vector[count] << " ";
    }
    cout << endl;

    double max_matrix = matrix[0][0];
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
            if (max_matrix < matrix[count_q][conut_u]){
                max_matrix = matrix[count_q][conut_u];
            }
        }
    }
    cout << max_matrix << " ";
    
    double min_matrix = matrix[0][0];
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
            if (min_matrix > matrix[count_q][conut_u]){
                min_matrix = matrix[count_q][conut_u];
            }
        }
    }
    cout << min_matrix << endl;
}






