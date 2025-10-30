#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n, y;
    cin >> n;
    if (n <= -1)
        {
           y = 1 / ( n * n ); 
        }
    else if ( n >=-1 && n <= 2 )
        {
            y = ( n * n );
        }
    else 
        {
            y = 4;
        }
    printf( "%.2f\n", y);
    
}
