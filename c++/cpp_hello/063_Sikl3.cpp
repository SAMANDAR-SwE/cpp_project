#include <iostream>
#include <math.h>
using namespace std;

long double factorial(int k) 
    {
        long double f = 1;
        for (int i = 1; i <= k; i++)
            {
                f *= i;
            };
        return f;
    }



int main(){
    double n, S = 0;
   
    cin >> n;
    for ( int i = 1; i <= n; i ++  )
        {
            S+= pow( (-1), ( i - 1 ) ) / ( factorial( 2 * i - 1 ) );
                  
        }
    printf("%.4f\n", S);
    return 0;
    
}
