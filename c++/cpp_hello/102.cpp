#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[n];

    // Massivni kiritish
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Eng kichik elementni topish
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int a, b;
    cin >> a >> b;

    
    for (int i = a; i <= b; i++) {
        arr[i] /= min;
    }

    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
