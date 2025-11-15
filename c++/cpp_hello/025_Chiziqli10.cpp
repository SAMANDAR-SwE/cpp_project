#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double  a , x;
    cin >> a >> x;
    double TT = (
        ( ( pow(
             ( x - 1.0 ), ( 1.0 / 2.0 ) 
               ) 
          ) + 
          ( pow( 
                ( x + 2.0 ), ( 1.0 / 2.0 ) 
               ) 
          )+ 
          log10( 
                (
                    pow( (a + ( x * x ) ) , ( 1.0 / 2.0 ) ) +
                    2
                )
           )
        ) /
        ( 
            pow(
                    (
                        ( 
                            pow( ( x + 2.0 ) , ( 1.0 / 2.0 ) ) 
                        ) + 
                        ( 
                            pow( ( x + 24.0 ) , ( 1.0 / 2.0 ) ) 
                        ) + 
                        (
                            pow( (x) , 5 )  
                        )
                    ) 
                , ( 1.0 / 2.0 ) )
        )         
        );
    

    printf( "%.2f\n" , TT );
    return 0;
}