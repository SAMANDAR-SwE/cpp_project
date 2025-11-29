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

    double sum_juft = 0, juft_count;
    for (count = 0; count < n_son; count++){
        if (list[count] % 2 == 0){
            sum_juft += list[count];
            juft_count ++;
        } 
    
    }
    printf("%.2f\n", (sum_juft / juft_count));


}
