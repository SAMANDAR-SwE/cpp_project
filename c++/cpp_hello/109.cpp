#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    double list[n_son];

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    double M;
    cin >> M;
    double max = 1;
    for (count = 0; count < n_son; count++){
        if (list[count] > M){
            max *= list[count];
        }
            
    }
    
    printf("%.2f\n" , (log(max))); 
    
    
    
}
