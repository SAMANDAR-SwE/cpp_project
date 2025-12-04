from math import sin, pow
from factorial import factorial
i = int(input())
S = 0
for n in range(1, i+1):
    S += (-1) ** (n - 1) / factorial(2 * n - 1)
print("%.4f" % S)