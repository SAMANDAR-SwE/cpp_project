a, b, c = map(int, input().split())
h = 2
S = 0
for x in range(a, b+1, h):
    S += (a ** b + b ** x + c ** a ) / ( 2 * x ** 2 + 3 * a ** x)
print("%.2f" % S)