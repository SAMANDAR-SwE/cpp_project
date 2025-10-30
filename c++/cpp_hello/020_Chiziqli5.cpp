#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x , y;
    cin >> x >> y;
    double T11 = ( ( (x * x) + 1.0 ) / ( ( x * x ) + ( ( ( x * y ) + ( y * y )  ) / ( ( y * y ) + ( ( y + ( x * y )) / ( fabs( ( x * y ) ) + 5.0 )   ) )  ) ) ) + ( 1.0 / ( 1.0 + cos(x) + ( 1.0 / ( sin( fabs(x) ) ) ) ) );
    printf( "%.2f\n" , T11 );
    return 0;
}