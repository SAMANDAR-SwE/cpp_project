from math import *

x, y, c, d = map(int, input().split())

S = 0 
P = 1
SP = 0

for a in range(1, x + 1):
    S += (4 * a + 6 * log(a)) / ((a ** 2) + a) 

for a in range(1, y + 1):
    P *= fabs(a - 6 * cos(a)) / ((a ** 2) + pow(a, log(a)))

for k in range(1, c + 1):
    praduct = 1
    for a in range(1, d + 1):
        praduct *= (a * k + x) / ((k ** 2) + (y ** 2)) 
    SP += praduct

print("%.2f %.2f %.2f" % (S, P, SP))