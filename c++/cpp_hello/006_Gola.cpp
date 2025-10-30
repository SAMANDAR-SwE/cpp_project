#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    double a, b, h;
    cin >> a >> b >> h;

    double R = a / 2;
    double r = b / 2;
    double l = sqrt((R - r) * (R - r) + h * h);

    double S = M_PI * (R * R + r * r) + M_PI * (R + r) * l;

    printf("%.2f\n", S);
    return 0;
}
