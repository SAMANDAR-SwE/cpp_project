#include<iostream>
#include<math.h>
using namespace std;


int main()
{
double x , y , z;
cin >> x >> y >> z;
double Af = (
pow( 2 , ( -x )
)*


pow( x +
pow( ( abs( y ) + 2.0 ) , ( 1.0 / 4.0 ))
,( 1.0 / 2.0 ) )*


pow( ( exp( x - 1) / ( sin( z + 2.0 ) ) + 2.0)
,(1.0 / 3.0))
);
printf( "%.2f\n", Af);
return 0;
}