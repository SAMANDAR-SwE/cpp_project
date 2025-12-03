#include <iostream>
#include <vector>
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
                cout << matrix[count_q][conut_u] << " " ;
        }
    }
}