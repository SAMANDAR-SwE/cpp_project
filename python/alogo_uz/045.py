from math import sqrt
a, b, c = map(float, input().split())

D = b * b - 4 * a * c
if D < 0:
    print("NO")
elif D == 0:
    print(-b/(2 * a))
else:
    print("%.2f %.2f" % ( ( -b + sqrt(D) ) / (2 * a), (-b - sqrt(D) ) / (2 * a)))