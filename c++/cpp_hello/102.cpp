#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[100];

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

    // 1-indeksdan 0-indeksga
    a--;
    b--;

    // [a,b] oraliqdagilarni bo‘lish
    for (int i = a; i <= b; i++) {
        arr[i] /= min;
    }

    // Natijani chiqarish (0.1 aniqlikda)
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
