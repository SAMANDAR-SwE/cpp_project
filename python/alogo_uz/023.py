from math import pow, fabs, cos
a, b, c, d, x = map(float, input().split())
y2 = (a * x * x + b * x + c) / (x * pow(a, 3) + a * a + pow(a, (b - c))) + cos(fabs((a * x + b) / (c * x + d + pow(2, c))))
print("%.2f\n" % y2)