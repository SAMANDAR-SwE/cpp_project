#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, i = 1, P = 1;
    cin >> a;
    do{
        P *= (pow(i, 3) - pow(i, 2.0 / 5.0) ) / i * i - 25; 
        i ++;
    }while (i <= a);

    printf("%.2f\n", P);
    return 0;

    
}

