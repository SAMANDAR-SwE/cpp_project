from math import *

a = int(input())
S = 0

x = -pi / 2
h = pi / 19

while x <= pi:
    S += (a**a)**(1/3) + x**2 * cos(a * x)
    x += h

print(f"{S:.2f}")
