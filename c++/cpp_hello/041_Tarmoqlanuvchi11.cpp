#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if (x < 1 && y < 1 && z < 1) {
        if (x <= y && x <= z)
            x = (y + z) / 2;
        else if (y <= x && y <= z)
            y = (x + z) / 2;
        else
            z = (x + y) / 2;
    }

    cout << fixed << setprecision(2) << x << " " << y << " " << z;
    return 0;
}
