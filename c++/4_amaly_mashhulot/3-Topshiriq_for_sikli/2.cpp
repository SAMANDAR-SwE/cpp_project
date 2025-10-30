#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double S = 0, i;
    cin >> i;
    for (int n = 0; n <= i; n++)
        {
            S += pow((-1), 2 *n ) * sin( pow(n, n) ) / pow(2, n);
        }
    printf("%.2f\n", S);
}
