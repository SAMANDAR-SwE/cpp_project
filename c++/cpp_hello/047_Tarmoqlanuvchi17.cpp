#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n, f;
    cin >> n;
    if ( n >= 0 && n <=1 )
        {
            f = abs(n);
        }
    else if ( n >=1 && n <=2)
        {
            f = n;
        }
    else
        {
            f = -2 * n + 5;
        }
    printf("%.2f\n", f);
}
