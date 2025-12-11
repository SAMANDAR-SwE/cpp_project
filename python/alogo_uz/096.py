from math import *

x, y, c, d = map(int, input().split())

S = 0
P = 1
SP = 0

for k in range(1, x + 1):
    S += (((-1) ** k) * (k + 1)) / ((k ** 3) + (k ** 2) + 1)

for i in range(1, y + 1):
    P *= ((i ** 3) + fabs(i - 9)) / (log(i) + 7 * i)

for n in range(1, c + 1):
    summ = 0
    for m in range(1, d + 1):
        summ += ((-1) ** m) * (log(m + 5)) / ((m ** (n + 3)) + n * m)
    SP *= summ

print(f"{S:.2f} {P:.2f} {SP:.2f}")
