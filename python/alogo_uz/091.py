from math import *

a, b, c, d = map(int, input().split())

S = 0
P = 1
SP = 0

for m in range(1, a + 1):
    S += (3 * (m ** 3) + 4 * m + 5) / ((m ** 3) + log(m))

for k in range(1, b + 1):
    P *= k / ((k **3) + 7 * k + 5)

for i in range(1, c + 1):
    product = 1
    for m in range(1, d + 1):
        product *= (log(i) + (m ** 1)) / (m ** i)
    SP += product

print(f"{S:.2f}, {P:.2f}, {SP:.2f}")