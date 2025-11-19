from math import pi, sqrt
a, b, h = map(int, input().split())
R = a / 2
r = b / 2
l = sqrt((R - r) * (R - r) + h * h)
S =pi * (R * R + r * r) +pi * (R + r) * l

print("%.2f" % S)