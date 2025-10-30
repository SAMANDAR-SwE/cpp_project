//h balandlikqan erkin tushayotgan jism qancha vaqtdan keyin yerga uriladi(g=9.8)
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double h;
    cin >> h;
    float T = sqrt((2*h)/9.8);
    printf("%.2f\n", T);
    return 0;

}