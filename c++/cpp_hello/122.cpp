#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<double> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];

    }
    double summa = 0, summa_kvadrat = 0, count_summa = 0;
    for (count = 0; count < n_son; count++){
        summa_kvadrat += pow(list[count], 2);
        summa += list[count];
        count_summa ++; 
    }
    cout << summa_kvadrat << endl << (summa / count_summa);

}