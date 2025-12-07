from math import *

a = int(input())

S = 0

x = (-pi / 2)
h = pi / 10

while x <= pi:
    S += 2 * ( ( a ** (sin(2 * x) ) ) ** (1/3)) + x * x * cos(a * x) 
    x += h

print(f"{S:.2f}")
