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
    int x, y, count_n;
    cin >> x >>y;
    for (count = 0; count < n_son; count++){
        if (list[count] < x && list[count] < y){
            count_n ++;
        }
    }
    cout << count_n;
}