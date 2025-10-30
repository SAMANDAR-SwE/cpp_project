#include<iostream>
#include<math.h>
using namespace std;


int main()
{
double x , y, maxx , minn;
cin >> x >> y ;
    maxx = max( x , y );
    minn = min( x , y );

    cout << maxx << " " << minn << endl;
    return 0;
}