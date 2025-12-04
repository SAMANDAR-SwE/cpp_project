from factorial import factorial
i, x = map(int, input().split())
S = 0
for n in range(1, i+1):
    S += (-1) ** (n - 1) * x ** (2 * n - 1) / factorial(2 * n - 1)
print("%.2f" % S)