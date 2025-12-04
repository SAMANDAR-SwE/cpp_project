from math import sin, pow
i, x = map(int, input().split())
S = 0
for n in range(1, i+1):
    S += x ** n / n ** ( 1 / 2 )
print("%.3f" % S) 