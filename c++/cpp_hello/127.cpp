#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n_son, count;
    cin >> n_son;

    vector<int> list(n_son);

    for ( count = 0; count < n_son; count++){
        cin >> list[count];

    }
    int min = list[0];
    for (count = 0; count < n_son; count++){
        if (list[count] < min){
            min += list[count];
        }
    }

    for (count = 0; count < n_son; count++){
        if (list[count] < 0){
            list[count] = pow(min, 2);
            cout << list[count] << " " ;

        }
    }

    for (count = 0; count < n_son; count++){
        cout << list[count] << " " ;

        
    }
    
    
    
}
