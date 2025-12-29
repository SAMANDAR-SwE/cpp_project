n_son = int(input())

massiv = list(map(int, input().split()))


summa = 0
for i in range(n_son):
    summa += pow(massiv[i], 2)

print(summa)