#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    double a[100], b[100];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    double kth = b[k - 1];

    for(int i = 0; i < n; i++)
        if(a[i] > kth)
            cout << a[i] << " ";
}