//Konusni balandligi h va radiusi r bo`lsa uni hajmi nimaga teng bo`ladi.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double h,r;
    cin >> h >> r;
    float V = (M_PI*r*r*h)/3.0; 
    printf("%.2f\n", V);
    return 0;

}