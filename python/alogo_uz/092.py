from math import *

x, y, a, b = map(int, input().split())

S = 0
P = 1
SP = 0

for n in range(1, x + 1):
    S += ((n ** 2) + 2 * n) / ((n ** 3) + n * pow(cos(n), 2) + 1)

for i in range(1, y + 1):
    P *= ((i ** 2) + 1) / ((i ** (3 / i)) + 2)

for i in range(1, a + 1):
    product = 1
    for k in range(1, b + 1):
        value = ((k**i + sqrt(k)) /
                 (k ** 3 + i ** (1 / k)))
        product *= log(value)
    SP += product

print(f"{S:.2f} {P:.2f} {SP:.2f}")
