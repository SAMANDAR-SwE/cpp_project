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
    double S = 0, i, x;
    cin >> i >> x;
    for (int n = 0; n <= i; n++)
        {
            S +=1 + ( pow(-1, ( n - 1 ) ) * pow( x, ( 2 * n - 2 ) )  ) /  factorial( 2 * n - 2 );
        }
    printf("%.2f\n", S);
}
