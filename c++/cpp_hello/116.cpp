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
    double max = list[0];
    for (count = 0; count < n_son; count++){
        if (list[count] > max){
            max = list[count];
        }
    }

    for (count = 0; count < n_son; count++){
        printf("%.2f ", ( list[count] / max ));
    }

    
}