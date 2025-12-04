from math import sin, pow
i = int(input())
S = 0
for n in range(1, i+1):
    S += (-1) ** (n - 1) * (sin(n ** n)) / ( 2 ** n)
print("%.2f" % S)