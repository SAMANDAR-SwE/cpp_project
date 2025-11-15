#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a , b;
    cin >> a >> b;
    double T = (pow(a , ( 1.0 / 5.0 ) ) ) + 
    ( 
        (pow(
            ( b * ( ( a + b ) / ( ( 2.0 * b ) + ( a * b ) ) ) ) , 
            ( 1.0 / 4.0 )))
            
            * ( ( a * a) + ( b * b ) + 2.0 ) );
    printf( "%.2f\n" , T);
    return 0;
}