from math import e, sin, log,fabs,sqrt
a, x, y = map(float, input().split())
w2 = sqrt(pow(e, x*y) - sin(a * x) - ( ( (x ** 2) + 2) / (fabs(x) + 5) ) ) + sqrt(log(x * x + 2) + 5)
print("%.2f" % w2)