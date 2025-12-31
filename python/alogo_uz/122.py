from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))

M = int(input())
summa = 0
summa_orta = 0
count = 0
for num in massiv:
    summa += pow(num, 2)
    summa_orta += num
    count += 1

print(summa, (summa_orta / count), end="\n")


