#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n_son, count;
    cin >> n_son;
    double list[n_son];

    for (count = 0; count < n_son; count++){
        cin >> list[count];
    
    }
    double M;
    cin >> M;
    double max = 0;
    for (count = 0; count < n_son; count++){
        if (list[count] < M){
            max += pow(list[count], 2);
        }
            
    }
    
    printf("%.0f\n" , max); 
    
    
    
}
