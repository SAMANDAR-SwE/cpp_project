#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    vector<double> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    double Summa = 0;
    for (int i = 0; i < n_son; i++) {
        Summa += list[i];
    }

    double summa_orta = Summa / n_son;
    double min_summ = 0;
    int min_summ_count = 0;
    for (count = 0; count < n_son; count++){
        Summa += list[count];
        if (summa_orta >list[count]){
            min_summ += list[count];
            min_summ_count ++;
        }
    }
    if (min_summ_count > 0) {
        printf("%.2f\n",(min_summ / min_summ_count)); 
    } else {
        cout << "O'rtachadan kichik son yo'q";
    }
    return 0;
    
}
