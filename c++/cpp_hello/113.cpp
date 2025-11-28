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
    
    double negativeSum = 0, negativeCount = 0;
    for (count = 0; count < n_son; count++){
        if (list[count] < 0){
            negativeSum += list[count];
            negativeCount ++;
        }
    }
    printf("%.2f\n", (negativeSum / negativeCount));
}
