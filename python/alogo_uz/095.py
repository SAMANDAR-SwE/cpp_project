from math import *

x, y, c, d = map(int, input().split())

S = 0
P = 1
SP = 0

for i in range(1, x + 1):
    S += ((i ** 4) + (i ** 2) + 3) / (sqrt(i + e ** i))
    
for k in range(1, y + 1):
    P *= (k + 1) / (k ** 3 + 5 * k)

for m in range(1, c + 1):
    product  = 1
    for n in range(1, d + 1):
        product *= sqrt((fabs((m ** n) - (n ** m)) / ((m ** n) + (n ** m))))
    SP += product

print(f"{S:.2f} {P:.2f} {SP:.2f}")
