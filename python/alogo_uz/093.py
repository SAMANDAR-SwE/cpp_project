from math import *

x, y, a, b = map(int, input().split())

S = 0
P = 1
SP = 0

for k in range(1, x + 1):
    S += ((k ** 2) + sin(k) + 5) / (((k ** 7) + 1) ** (1 / 5))

for n in range(1, y + 1):
    P *= (n + sqrt(n)) / (n - (n + 1) ** (1 / 5))

for k in range(1, a + 1):
    product = 1
    for i in range(1, b + 1):
        product *= ((i ** 2) + (k ** (2 / i))) / ((sin(i) + cos(k)) * (i ** k))
    SP += product

print(f"{S:.2f} {P:.2f} {SP:.2f}")
