from math import *

a, b, c = map(float, input().split())
S = 0

x = - pi


while x <= pi:
    S += ( ( log(a ** (2 * sin(x))) + (e ** (2 * x))) / ( atan(x) + b) ) + c  
    x += pi / 10

print(f"{S:.2f}")
