from math import cos, e, atan, fabs
x, y = map(float, input().split())
f2 = ( (( (1) / (x + (2 / x * x) + (3 / pow(x, 3))) ) + pow(e, (x * x + 3 * x ) ) ) / (atan(x + y) + pow(fabs(5 + x), 2)) ) - pow(cos(y * y + ( x * x / 2)), 2)
print("%.2f\n" % f2)