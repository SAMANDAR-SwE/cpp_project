#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n, S = 0;
   
    cin >> n;
    for ( int i = 1; i <= n; i ++  )
        {
            S+= pow( -1 , (i-1) ) * (sin(pow(i, i)) / pow(2.0, i));   
        }
    printf("%.2f\n", S);
    return 0;
    
}
