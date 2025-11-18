#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double y_bottom = -(x + 2) / 3.0;

    if (x >= -2 && x <= 1 &&
        y >= -1 && y <= 1 &&
        y >= y_bottom) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
