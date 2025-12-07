from math import *
x, y, c, d = map(int, input().split())

summ = 0 
P = 1
PP = 1

for a in range(1, x + 1):
    summ += (a * x + 4) / (sqrt(a + log(6)))

for a in range(1, y + 1):
    P *= (a * (x ** 2) + 6) / (sin( a * x))

for i in range(1, c + 1):
    for j in range(1, d + 1):
        PP *= (j * i + y * x) / ( sqrt( pow( (j * x + y ), i) ) )

print("%.2f %.2f %.2f" % (summ, P, PP))