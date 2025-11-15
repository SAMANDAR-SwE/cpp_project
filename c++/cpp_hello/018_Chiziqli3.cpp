#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x , y;
    cin >> x >> y;
    
    double s = ( ( 1.0 / (x + ( 2.0 / ( x * x ) ) + (3.0 / ( pow( x, 3) ) ) ) ) + ( exp( pow( x, 2 ) + 3.0 * x ) ) );

    
    double m = ( atan( x + y ) + pow( abs( 5.0 + x ), 2) ) ;
    
    double co = ( pow( ( cos( ( y * y )  + ( ( x * x ) / 2.0 ) ) ) , 2 ) );    
    
    double f2 = ( s / m ) - co;
    
    printf( "%.2f\n", f2 );
    
    return 0;
}