from factorial import factorial
i, x = map(int, input().split())
S = 0
for n in range(1, i+1):
    S += x ** (2 * n - 1) / factorial(2 * n - 1)
print("%.3f" % S)