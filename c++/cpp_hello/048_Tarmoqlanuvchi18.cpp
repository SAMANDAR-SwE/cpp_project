#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, y;
    cin >> a;
    if ( a >= 0 )
        {
            y = -( a * a);
        }
    else
        {
            y = - a;
        }
    printf( "%.2f\n", y );
}
