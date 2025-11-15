#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, maxss, minss;
    cin >> a >> b >> c >> d;
    if (a <= b && b<= c  && c <= d)
        {
            maxss = max( max( max( a , b ), c), d);
            a = maxss, b = maxss, c = maxss, d = maxss; 
        }
    else
        {
            minss = min( min( min( a , b ), c), d);
            a = minss, b = minss, c = minss, d = minss;
        }
    cout << a << " " << b << " " << c << " " << d <<endl;
    return 0;
}
