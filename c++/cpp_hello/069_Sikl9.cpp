#include <iostream>
#include <math.h>
using namespace std;
/*
int main(){
    int x , n , S = 0 , k = 1;
    cin >> x >> n ;
    

    while (k <= n)
        {
            S += (pow((-1), (k-1) ) * pow( ( x - 1 ), k )) / k;   
            k ++; 
        }
    
        cout << S;  
    
}
*/

int main(){
    int x , n , S = 0 , k = 1;
    cin >> x >> n ;

    do {
        S += (pow((-1), (k-1) ) * pow( ( x - 1 ), k )) / k;   
        k ++;  9
        cout << S;
    }
    while (k < n);
    
}
