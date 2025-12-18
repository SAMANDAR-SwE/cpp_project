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

    int K;
    cin >> K;
    for (count_q = 0; count_q < qator; count_q++){
        for (conut_u = 0; conut_u < ustun; conut_u++){
                if (count_q != K-1){
                    cout << matrix[count_q][conut_u] << " ";               }
        }
        if (count_q != K-1){
        cout << endl;
        }
    }

}