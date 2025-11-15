#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x1 , x2, c , d;
    cin >> x1 >> x2 >> c >> d;

    double F = fabs(
    
                ( pow( ( 
                        sin( 
                            fabs((c * ( pow( x2 , 3.0 ) ) ) + 
                                ( d * pow( x1, 3.0 ) ) - 
                                ( c * d ) 
                               )
                            ) 
                        ) /
                        pow( 
                            ( ( c * ( x1 * x1 ) ) + 
                              ( d * ( x2 * x2 )) + 
                              5.0
                            ) , 
                            ( 1.0 / 2.0 ) )
                 
                    , 2.0 )
                ) 
                  ) +

                    ( tan(x1 * 
                          (pow( x2, 2.0 ) ) + 
                          ( pow( d , 3.0 ) ) 
                         ) 
                    );
    printf("%.2f\n" , F );
    return 0;
}