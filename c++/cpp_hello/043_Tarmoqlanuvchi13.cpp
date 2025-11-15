#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    if (x < 0 && y < 0 )
    {
        x = abs(x), y = abs(y);
    }
    else if (x < 0 || y < 0)
    {
        x += 0.5, y +=0.5;
    }
    else
    {
        x = x ,y = y;  
    }
    cout << x << " " << y <<endl;
}