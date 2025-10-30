#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, x;
    double S = 0;
    cin >> n >> x;

    for ( int i = 1; i <= n; i ++ )
        {
            S += pow(-1.0, ( i - 1 ) ) / pow( x, ( 2.0 * i ) );
        }
    printf("%.3f\n", S);
}
