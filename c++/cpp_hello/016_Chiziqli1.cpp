#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a, b, c, x, Q;
    cin >> a >> b >> c >> x;
    Q = 0;
    if ((a * b) != 0){
        Q = (a * x * x + pow((b * c ), 1/3) ) / (2 * a * b);
    }
    else if (a > 0)
    {
        Q = ( pow(sin(x), 2) + pow(b, 3) ) / log(a * x * x);
    };
    cout << Q << endl;
    
    
}