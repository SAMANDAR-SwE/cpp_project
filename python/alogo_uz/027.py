from math import sqrt, cos, sin, pow, tan
x = float(input())
AA = sqrt((2 * tan(x + 2) - cos(x + pow(2, x)) ) / (1 + pow(cos(x + 2), 2) ) ) + (sin(x ** 2) / (x * x + 3))
print("%.2f" % AA) 