#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    vector<double> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    double summa_pow = 0;
    for (count = 0; count < n_son; count++){
        summa_pow += pow(list[count], 2);
    }
    printf("%.0f\n", summa_pow);
    
}
