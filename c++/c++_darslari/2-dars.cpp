#include <iostream>
using namespace std;

int main() {
    int kun;
    cin >> kun;

    switch (kun) {
        case 1:
            cout << "Dushanba";
            break;
        case 2:
            cout << "Seshanba";
            break;
        case 3:
            cout << "Chorshanba";
            break;
        default:
            cout << "Noto‘g‘ri son";
    }
    return 0;
}
