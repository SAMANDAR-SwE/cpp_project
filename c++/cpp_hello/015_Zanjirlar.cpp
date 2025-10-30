#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double R1, R2, R3;
    cin >> R1 >> R2 >> R3;
    float R = 1/((1/R1)+(1/R2)+(1/R3));
    printf("%.2f\n", R); 
    return 0;
}