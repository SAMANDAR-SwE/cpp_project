from math import log
n_son = int(input())

massiv = list(map(int, input().split()))



summa = 0
product = 1
for i in range(n_son):
    if i % 2 == 0:
        product *= massiv[i]
    if i % 2 == 1:
        summa += massiv[i]

print(f"{(product / summa):.2f}")