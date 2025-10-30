#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, y, z;
    cin >> x >> y >> z;
    
    if (x > 0 ) {
        x = x * x; 
    }
    if ( y > 0 ) {
        y = y * y;
    }
    if ( z > 0 ) {
        z = z * z;
    }
    cout << x << " " << y << " " << x << endl;
    return 0;
}
