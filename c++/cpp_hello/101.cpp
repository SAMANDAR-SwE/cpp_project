#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;        // 6 kiritildi
    double a[100];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        }   
    double avg = sum / n;
    double small_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < avg) {
            small_sum += a[i];
            count++;
        }
    }

    double result = small_sum / count;

    cout << result;
}
