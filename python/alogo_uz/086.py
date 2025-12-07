from math import *

a, b, c = map(int, input().split())
S = 0

x = c
h = 0.25

while x <= b:
    S += a * a * cos(x) + ( (sin(x)) / (2)) + b * x * x 
    x += h

print(f"{S:.2f}")
