from math import cos, sin
from factorial import factorial
a, b, c,d = map(int, input().split())
h = 2
S = 0
for x in range(c, d+1, h):
    S += ((sin(a * x) + b ** (2 * c)) / (b ** 2 + pow(cos(x), 2))) ** (1/3) - sin(x ** 2) / (a * b)
print("%.2f" % S)