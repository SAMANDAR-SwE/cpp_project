#include <iostream>
#include <math.h>
using namespace std;
int main() {
double a , x;
cin >> a >> x;
double BB1 = (
( x *
(
sin(
( ( x / 2 ) + ( x / 3 ) + ( x / 4 ))
)
)
) +
(
( log10( ( x * x ) - 2 ) + pow( 3, a ) ) / ( cos( x + 3) * sin( x + 3) +8 )
)
);
printf( "%.2f\n" , BB1);
}