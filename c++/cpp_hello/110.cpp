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
    double M, K;
    cin >> M >> K;
    double Summa = 1;
    for (count = 0; count < n_son; count++){
        if (list[count] == M || list[count] == K ){
            Summa *= list[count];
            
        }
            
    }
    
    printf("%.2f\n" , Summa); 
    
    
    
}
