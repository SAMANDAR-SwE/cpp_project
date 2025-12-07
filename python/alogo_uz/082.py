from math import *

a, b, c = map(int, input().split())
S = 0

x = 1
h = 3

while x <= 10:
    S += ( (a * (x ** 2)) / b ) + (x / c)
    x += h

print(f"{S:.2f}")
