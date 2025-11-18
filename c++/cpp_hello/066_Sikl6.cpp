#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n, x, S = 0;
    cin >> n >> x;
    for ( int i = 1; i <= n; i++ )
        {
            S += pow(-1, (n - 1)) * ( sin( n * x) / n );
        }
    printf("%.2f\n", S);
}
