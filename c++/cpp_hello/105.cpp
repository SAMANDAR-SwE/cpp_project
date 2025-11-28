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
    int a, b;
    cin >> a >> b;  
    double sum_a_b = 0,Summa = 0;
    for (count = 0; count < a; count++){
        Summa += list[count];
        sum_a_b ++;    
        
    }
    for (count = b+1; count <= n_son; count++){
        Summa += list[count];  
        sum_a_b ++;
        
    }
    cout << Summa / sum_a_b << endl;
        
}
