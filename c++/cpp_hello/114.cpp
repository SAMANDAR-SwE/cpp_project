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
    double product_div_by_2_and_5 = 1.0;

    for (count = 0; count < n_son; count++){
        if (list[count] % 2 == 0 && list[count] % 5 == 0){
                product_div_by_2_and_5 *= list[count];

        }
    }
    printf("%.2f\n", (sin(product_div_by_2_and_5 * M_PI / 180.0)));
}
