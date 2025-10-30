#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b, c, x1, x2, D;
    cin >> a >> b >> c;
    D= b*b - 4*a*c;
    if (D >= 0)
    {
        x2= (-b - sqrt(D)) / (2 * a);
        x1= (-b + sqrt(D)) / (2 * a);
        printf( "%.2f %.2f\n", x1, " ", x2 );

    }
    else
    {
        cout << "NO" << endl;
    }
}
