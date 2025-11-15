#include<iostream>
#include<math.h>
using namespace std;


int main()
{
double x , y, z, maxx , minn;
cin >> x >> y >> z ;
    maxx = max(max(max( ( x + y + z), x), y) , z);
    minn = pow( 
        min(
         min(
            min(
                 ( x + ( y / 2 ) ) 
                , x) 
                , y), z ) , 2.0);

    printf("%.2f %.2f\n", maxx, minn);
    return 0;
}