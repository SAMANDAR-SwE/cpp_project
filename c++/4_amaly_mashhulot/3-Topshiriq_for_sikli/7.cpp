#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double S = 0, i, x;
    cin >> i >> x;
    for (int n = 1; n <= i; n++)
        {
            S += pow( x, n ) / (sqrt(n));
        }
    printf("%.2f\n", S);
}
