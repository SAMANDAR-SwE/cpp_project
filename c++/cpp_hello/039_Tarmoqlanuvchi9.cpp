#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, y;
    cin >> x >> y ;
    
    if ( x > y ) {
        printf("%.1f %.1f\n",(2 * x * y) ," " , ( ( x + y ) / 2));
    }
    else {
        printf("%.1f  %.1f\n", ( ( x + y ) / 2)," " , (2 * x * y));
    }
    return 0;
}
