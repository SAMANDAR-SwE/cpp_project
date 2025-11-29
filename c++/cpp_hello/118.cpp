#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<int> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];

    }
    double summa_toq = 0, summa_toq_count ;
    for (count = 0; count < n_son; count++){
        if (list[count] % 2 == 1){
            summa_toq_count ++;
            summa_toq += list[count];
        }
    }
    printf("%.2f", (summa_toq / summa_toq_count));
}