from factorial import factorial

i, k = map(int, input().split())
S = sum(((-1)**n * k**n) / factorial(n) for n in range(1, i+1))
print(f"{S:.3f}")
