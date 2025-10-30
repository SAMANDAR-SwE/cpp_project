#include <iostream>
#include <math.h>
using namespace std;
int main() {
double a, x , y;
cin >> a >> x >> y;
double TT = (
(
pow((
( ( y * y ) + exp( x ) ) +
pow(
exp( x ) + ( ( a ) / ( ( x * x ) + 2.0 ) )
,( 1.0 / 2.0 )
)
+ (
pow(
cos( x )
,( 2.0 ))
) / sin( ( x * x )
)
)
,( 1.0 / 2.0 )
) +
pow(
( cos( x ) )
,( 3.0 ))
)
);
printf( "%.2f\n" , TT );
return 0;
}