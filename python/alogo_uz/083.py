from math import *

a, b, c = map(int, input().split())
S = 0

x = 5
h = 0.5

while x <= 10:
    S += (a * a + b * x + (x ** c)) / (a * a + b * b + x * x)
    x += h

print(f"{S:.2f}")
