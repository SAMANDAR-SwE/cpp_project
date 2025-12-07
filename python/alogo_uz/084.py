from math import sin, pow, cos

a, b, c = map(int, input().split())
S = 0

x = -1
h = 0.25

while x <= 1:
    S += ( ( (sin(a * x) + (b ** c)) / ((b * b) + pow(cos(x), 2)) ) ** (1 / 3)) - ( (sin(x * x)) / (a * b) )
    x += h

print(f"{S:.2f}")
