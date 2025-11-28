#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    double list[n_son];

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    int k, l;
    cin >> k >> l;
    double summ_k_l = 0, yegindi_k_l = 0;
    for (count = k-1; count < l; count++){
        summ_k_l += list[count];
        yegindi_k_l ++;
    }
    cout << summ_k_l / yegindi_k_l << endl;
    
}
