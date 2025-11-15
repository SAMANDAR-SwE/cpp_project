#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double S = 0, m = 1;
    do{
        if (m > 3){
	        S += (3.0 * pow(m, 3.0) + (4.0 * m) + 5.0) / (pow(m, 3.0) + log10(m - 3.0));
        }
	m++;
    } while(m <=19);
    printf("%.2f", S);
}



