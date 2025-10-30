#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n, S;
    cin >> n;
    for ( int i = 1; i < n+1; i ++  )
        {
            S+= (sin(i)/ pow(2, i)); 
            
        }
    printf("%.2f\n", S);
    return 0;
    
}
