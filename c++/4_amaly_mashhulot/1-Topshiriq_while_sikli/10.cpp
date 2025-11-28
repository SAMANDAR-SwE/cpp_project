#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double x, i, S = 0, n = 1;
    cin >> x >> i;
    while (n <= i){
        S += ( pow(-1, (n - 1)) * pow((x - 1), n) ) / n;
        i ++;
    };
    cout << S << endl;
}