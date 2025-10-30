#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a, b, c, d, x;
    cin >> a >> b >> c >> d >> x;
    double y2 = (
        (
            ( a * ( x * x ) ) +
            ( b * x ) + 
            x
        ) / 
        (
            ( x * pow( x , 3.0) ) +
            ( a * a ) + 
            ( pow( a , ( b - c ) ) )
        )+
        cos( 
            fabs( 
                ( ( a * x ) + b ) / 
                ( ( c * x ) + d + pow( 2.0 , c ) ) 
                ) 
            )

                       
    );


    printf( "%.2f\n" , y2);
    return 0;
}