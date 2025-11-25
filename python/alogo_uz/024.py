from math import sqrt, cos, fabs
a, b, c, x = map(float, input().split())
W1 = 0.75 + (8.2 * x * x + sqrt(fabs(pow(x, 3) + 3 * x) + cos(x - 2)) ) / (a/4 + b/3 + c/2 +1)
print("%.2f\n" % W1)