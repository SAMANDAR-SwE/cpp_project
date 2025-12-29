from math import log
n_son = int(input())

massiv = list(map(int, input().split()))

M = int(input())

summa = 0
for i in range(n_son):
    if M < massiv[i]:
        summa += massiv[i]

print(summa)
