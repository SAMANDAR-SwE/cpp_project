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
    
    int min_idx = 0;
    for (count = 1; count < n_son; count++){
        if (list[count] < list[min_idx]){
            min_idx = count;            
        }
    
    }
    for (count = 0; count < n_son; count++){
        if (list[count] == list[min_idx]){
            if (count == n_son){
                list[count] = list[min_idx];
            }
        }
    
    }
    
    

    
}
