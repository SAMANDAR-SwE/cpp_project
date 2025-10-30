#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a , b , c , x;
    cin >> a >> b >> c >> x;
    double w1 = 0.75 + (
                            ( 
                                (8.20 * ( x * x ) ) +
                                pow( 
                                    ( 
                                        (fabs(
                                              pow( x , 3.00 ) + 
                                              ( 3.00 * x ) 
                                             ) 
                                        ) + 
                                        ( cos( x - 2.00 ) ) 
                                    )
                                    , (1.00/2.00) )                      
                            ) / 
                            (
                                ( a / 4.00 ) + 
                                ( b / 3.00 ) + 
                                ( c / 2.00 ) + 
                                1.00
                            ) 
                        );
    printf( "%.2f\n" , w1);
    return 0;
}