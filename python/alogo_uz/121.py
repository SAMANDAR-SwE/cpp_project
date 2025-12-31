from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))

summa = 0
for num in range(n_son):
    if num > M - 1:
        summa += massiv[num]

print(summa)


