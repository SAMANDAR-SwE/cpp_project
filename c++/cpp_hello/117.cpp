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
    double summa_toq = 0;
    for (count = 0; count < n_son; count++){
        if (count % 2 == 1){
            summa_toq += list[count];
        }
    }
    cout << summa_toq << endl;
}