#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<double> list(n_son);

    for ( count = 0; count < n_son; count++){
        cin >> list[count];

    }
    double summa = 0, count_sum = 0;
    for (count = 0; count < n_son; count++){
        summa += list[count];
        count_sum ++;
    }

    for (count = 0; count < n_son; count++){
        if (list[count] < 0){
            list[count] = log(summa / count_sum);
        }

        printf("%.2f ", (double)list[count]);
    }

    
    
    
    
}
