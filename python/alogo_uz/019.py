from math import pi, sqrt, cos, fabs, log
x, y  = map(float, input().split())
z = log(fabs(pow((x + y), 2) + sqrt( fabs(y) + 2) - (x - ((x * y) / ( ( x * x / 2 ) - 5 ) ) ) ) ) + pow(cos(x + y), 2) / ((x + y) ** (1 / 3))
print("%.2f\n" % z)