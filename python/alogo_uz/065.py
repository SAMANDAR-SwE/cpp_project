from math import sin, pow
i, x = map(int, input().split())
S = 0
for n in range(1, i+1):
    S += n / x ** (2 * n)
print("%.3f" % S)