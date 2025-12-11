from math import *

x, y, c, d = map(int, input().split())

S = 0
P = 1
SP = 0

for n in range(1, x + 1):
    S += 1 / (5 - 17 * n + (n ** 3))

for m in range(1, y + 1):
    P *= (sqrt(fabs(m - 5) + 1)) / (m * m + 4 * m + ((-1) ** 3)) 

for i in range(1, c + 1):
    product = 1
    for k in range(1, d + 1):
        product *= ((-1) ** i) * ((fabs(sin(k) + e ** k)) ** (1 / 7)) / (2 * fabs(4 * (i ** 3) - (k ** 4)))
    SP += product

print(f"{S:.2f} {P:.2f} {SP:.2f}")
