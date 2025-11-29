#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<int> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];

    }
    int M;
    cin >> M;
    int summa_M = 0;
    for (count = 0; count < n_son; count++){
        if (count > M - 1){
            summa_M += list[count];
        }
    }
    cout << summa_M << endl;
}