from math import *

a = int(input())
S = 0

x = 0
h = 0.5

while x <= 10:
    S += a * cos(x) - sin(x**2)
    x += h

print(f"{S:.2f}")
