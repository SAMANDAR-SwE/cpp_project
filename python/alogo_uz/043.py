from math import fabs
x, y = map(float, input().split())

if x < 0 and y < 0:
    print(fabs(x), fabs(y))
elif x < 0 or y < 0:
    print(x + 0.5, y + 0.5)
else:
    print(x, y)