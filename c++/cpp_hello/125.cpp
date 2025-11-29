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
    int k, l;
    cin >> k >> l;
    double summa_kub = 0;
    for (count = 0; count < n_son; count++){
        if (count <= k && count <= l){
            summa_kub += pow((list[count]), 3.0);
        }   
    }
    printf("%.0f ", (double)summa_kub);
    
    
    
    
}
