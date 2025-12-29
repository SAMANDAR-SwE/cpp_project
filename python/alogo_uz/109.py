from math import log
n_son = int(input())

massiv = list(map(int, input().split()))

M = int(input())

product = 1
for i in range(n_son):
    if M < massiv[i]:
        product *= massiv[i]

print(f"{(log(product)):.2f}")
