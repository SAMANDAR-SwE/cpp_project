from math import fabs, sin, tan, sqrt
x1, x2, c, d = map(float, input().split())
F = fabs(pow(sin(fabs(c * pow(x2, 3) + d * pow(x1, 3) - c * d)), 2) / sqrt( (c * x1 * x1 + d * x2 * x2 + 5) + 2 ) ) + tan(x1* x2 * x2 + pow(d,3))
print("%.2f\n" % F)