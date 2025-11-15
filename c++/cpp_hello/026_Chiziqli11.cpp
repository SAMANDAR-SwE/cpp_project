#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a, x , y;
    cin >> a >> x >> y;
    
    double W2 = (
         (
            (pow( 
                    exp( x *y ) - 
                    ( x * sin( a * x) - 
                    ( ( ( x * x) + 2.0 ) / 
                    ( fabs( x ) + 5.0  ) ) ) 
                    ,( 1.0 / 2.0 ) 
                )
            )
         )+
         (
            ( 
                pow(
                        log( ( x * x ) + 2.0 ) + 5.0
                        ,( 1.0 / 2.0 ) 
                    )
            )
         )
    );

    printf( "%.2f\n" , W2);
    return 0;
}