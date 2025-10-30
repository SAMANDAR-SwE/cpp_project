#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float x, y;
    cin >> x >> y;
    float c1 = (x+y)/((y*y)+abs(((y*y)+2)/(x+(pow(x,3)/5))))+exp(y+2);
    printf("%.2f\n", c1);
    return 0;
}