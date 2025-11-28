#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double x, i, S = 0, n = 1;
    cin >> x >> i;
    do
    {
        S += ( pow(-1, (n - 1)) * pow((x - 1), n) ) / n;
        i ++;
    } while (n <= i);
    
    cout << S << endl;
}