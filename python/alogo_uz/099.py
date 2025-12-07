from math import * 

x, y, c, d = map(int, input().split())

S = 0 
P = 1
SP = 1

for k in range(1, x + 1):
    S += pow(k, 3) + pow(e, k)

for a in range(3, y + 1):
    P *= (a * x) / (sqrt((a ** 2) + (x ** 2) ) )

for i in range(1, c + 1):
    for j in range(1, d + 1):
        SP *= (i * x + (j ** 2)) / (sqrt(( i ** 2) + j * y))

print("%.2f %.2f %.2f" % (S, P, SP))