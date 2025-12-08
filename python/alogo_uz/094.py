from math import *

x, y, c, d = map(int, input().split())

S = 0
P = 1
SP = 0

for a in range(1, x + 1):
    S += (2 * a + cos(a)) ** 2

for a in range(1, y + 1):
    P *= (a + 6) / (sqrt((a ** 2) + 2))

for k in range(1, c + 1):
    summ = 0
    for y in range(1, d + 1):
        summ += ((k ** 2) + y) / (sqrt((k ** 2) + (y ** 2)))
    SP += summ 
    
print(f"{S:.2f} {P:.2f} {SP:.2f}")
