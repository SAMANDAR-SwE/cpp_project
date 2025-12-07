from math import *

a, b, c, d = map(float, input().split())
S = 0

x = d


while x <= c:
    S += ( ( (a * x + b) / (b * b + (cos(x)) ** 2 ) ) ** (1 / 5)) - (sin(x * x) / (a * b))  
    x += 1.5

print(f"{S:.2f}")
