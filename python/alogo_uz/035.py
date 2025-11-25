from math import fabs
a, b, c = map(int, input().split())
if a>=b>=c:
    print(a * 2, b * 2, c * 2)
else:
    print(fabs(a), fabs(b), fabs(c))