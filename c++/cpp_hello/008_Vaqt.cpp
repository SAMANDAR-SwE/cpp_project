//Tezligi v bo`lgan avtomabil s masofani qancha vaqtda bosib o`tadi.
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double v, s;
    cin >> v >> s;
    float T = s/v;
    printf("%.2f\n", T);
    return 0;
}