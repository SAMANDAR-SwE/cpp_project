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
    int max = list[0];
    for (count = 0; count < n_son; count++){
        if (list[count] > max){
            max = list[count];
        }

    }
    int k;
    cin >> k;
    for (count = 0; count < n_son; count++){
        if (count == k-1){
            list[count] = max;
        }   
        printf("%.0f ", (double)list[count]);
    }
    
    
    
    
    
}
