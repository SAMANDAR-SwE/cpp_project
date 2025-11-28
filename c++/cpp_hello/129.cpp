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

    for (count = 0; count < n_son; count++){
    
        cout << list[count] << " ";
    
    }
    
}
