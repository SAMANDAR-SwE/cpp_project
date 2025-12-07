from math import *

a, b, c = map(float, input().split())
S = 0

x = 0


while x <= 1:
    S += ( ( (sin(a * x) + (b ** c)) / (b * b + (cos(x)) ** 2 ) ) ** (1 / 2)) - (sin(x * x) / (a * b))  
    x += 0.25

print(f"{S:.2f}")
