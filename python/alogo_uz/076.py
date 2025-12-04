from math import cos, sin
from factorial import factorial
a, b, c = map(int, input().split())
h = 3
S = 0
for x in range(a, c+1, h):
    S += ((a * x + b) / (b ** 2 + pow(cos(x), 2))) ** (1/3) - sin(x ** 2) / (a * b)
print("%.2f" % S)