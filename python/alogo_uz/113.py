from math import log
n_son = int(input())

massiv = list(map(int, input().split()))



summa = 0
count = 0
for i in range(n_son):
    if massiv[i] < 0:
        summa += massiv[i]
        count += 1

print(f"{(summa / count):.2f}")