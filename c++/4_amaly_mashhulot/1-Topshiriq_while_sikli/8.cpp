#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int count;
    cin >> count;
    double S = 0;

    double a[count];
    
    for(int i = 0; i < count; i++){
        cin >> a[i];
    }
    double S_min = 0;    
    for (int i = 0; i < count; i++){
        if (a[i] < S / count)
            S_min += a[i];
    }
    cout << S_min <<endl;
}
