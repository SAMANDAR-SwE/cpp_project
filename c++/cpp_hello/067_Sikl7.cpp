#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n = 1, i,x, S = 0;
    cin >> i >> x;
    do {
        S += pow(x, n) / sqrt(n);
        n ++; 
    }while (n <= i);
    printf("%.3f\n", S);
    
}
