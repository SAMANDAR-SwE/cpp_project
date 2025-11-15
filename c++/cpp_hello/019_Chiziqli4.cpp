#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x , y;
    cin >> x >> y;
    double z = log(
        abs( pow( ( x + y ) , 2.0 ) + 
         
         pow( ( abs(y) + 2.0 ) , 1.0 / 2.0 ) - 
         
         ( x - ( ( x * y ) / ( ( ( x * x ) / 2.0 ) - 5.0 
        
        ) ) ) ) ) 
        
        + ( ( pow( cos( x + y ) , 2.0 ) ) / ( pow( ( x + y ) , (1.0 / 3.0) ) ) );
   
    printf( "%.2f\n", z );
    
    return 0;
}