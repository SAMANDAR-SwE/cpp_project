from math import *

a, b, c = map(int, input().split())
S = 0

x = 1
h = 5

while x <= 20:
    S += (a * x * x + b * x + c) / (a * a + b * b + x * x)
    x += h

print(f"{S:.2f}")
