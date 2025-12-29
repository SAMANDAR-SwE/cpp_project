#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    vector<int> list(n_son);

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    
    int min_idx = 0;
    for (count = 1; count < n_son; count++){
        if (list[count] < list[min_idx]){
            min_idx = count;            
        }

    if (n_son > 0) {
        swap(list[min_idx], list.back());
    }
    
    }
    for (count = 0; count < n_son; count++){
        cout << list[count] << " ";
    
    }
    
    

    
}
