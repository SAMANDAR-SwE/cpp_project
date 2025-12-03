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
    double sum = 0;
    for (count = 0; count < n_son; count++){
        if(list[count] % 2 == 0 || list[count] % 3 == 0 || list[count] % 5 == 0) {
            sum += list[count];       
        }
    }
    printf("%.0f\n", sum); 
}
