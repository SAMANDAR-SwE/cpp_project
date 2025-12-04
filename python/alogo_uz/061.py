from math import sin, pow
n = int(input())
S = 0
for i in range(0, n+1):
    S += sin(i) / pow(2, i)
print("%.2f" % S)