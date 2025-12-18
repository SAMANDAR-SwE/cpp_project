#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;

    int a[300];
    for (int i = 0; i < L; i++) {
        cin >> a[i];
    }

    int N, M;
    cin >> N >> M;

    int mat[50][50];

    // 1) Matritsani 0 bilan to‘ldiramiz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mat[i][j] = 0;
        }
    }

    // 2) Massivdan matritsaga joylash
    int limit = min(L, N * M);
    for (int i = 0; i < limit; i++) {
        mat[i / M][i % M] = a[i];
    }

    // 3) Natijani chiqarish
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
