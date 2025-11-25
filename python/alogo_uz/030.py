from math import sin, fabs, e, sqrt, pow
x ,y, z = map(float, input().split())
af = pow(2, (-x)) * sqrt(x + pow((fabs(y) + 2), 1 / 4)) * pow(((pow(e, (x - 1))) / (sin(z + 2)) + 2), 1/3)
print("%.2f" % af)
