#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double S = 0, i, x;
    cin >> i >> x;
    for (int n = 1; n <= i; n++)
        {
            S += (pow((-1), 2 * n ) / n ) * sin( n * x);
        }
    printf("%.2f\n", S);
}
