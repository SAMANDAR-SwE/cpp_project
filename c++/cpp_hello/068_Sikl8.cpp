#include <iostream>
#include <math.h>
#include "factorial.h"
using namespace std;

int main(){
    double n = 1, x, i, S;
    cin >> i >> x;
    do
    {
        S += pow(x, n) / factorial(n);
        n ++;
    } while (n <= i);
    printf("%.3f\n", S);
    
    
}
