#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    // Gipotenuza
    double c = sqrt(a * a + b * b);

    // Yuza
    double S = 0.5 * a * b;

    // Sinuslar
    double sinA = a / c;
    double sinB = b / c;

    cout << "Gipotenuza: " << c << endl;
    cout << "Yuza: " << S << endl;
    cout << "sin(A): " << sinA << endl;
    cout << "sin(B): " << sinB << endl;

    return 0;
}



















