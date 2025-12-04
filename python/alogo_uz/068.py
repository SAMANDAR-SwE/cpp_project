from factorial import factorial
i, x = map(int, input().split())
S = 0
for n in range(1, i+1):
    S += x ** n /factorial(n)
print("%.3f" % S)