#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    double AA = 
                (
                    pow(
                        ( 
                            ( 2.0 * tan( x + 2.0 ) -
                              cos( x + pow( 2.0 , x ))
                            )
                        )/
                        (
                            1.0 + pow(
                                        ( cos( x + 2.0 ))
                                        , 2.0 
                                     ) 
                        )
                        ,(1.0 / 2.0 )
                        )
                )+
                (
                    ( sin( x * x ) ) / 
                    ( ( x * x ) + 3.0 )
                );
    
    printf( "%.2f\n" , AA);
    return 0;
}