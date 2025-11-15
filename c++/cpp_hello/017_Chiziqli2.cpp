#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
   
    double s = ( 2.0 * tan( x + ( M_PI / 6.0 ) ) ); 

    double m = ( ( 1.0 / 3.0 ) + pow( cos( y + ( x * x ) ) , 2.0 ) );
    
    double lg =( log( ( x * x ) + 2.0 ) /log( 2.0 ) );
    
    double f2 = ( s / m ) + lg;
    
    printf("%.2f\n", f2);
    
    return 0;
}


