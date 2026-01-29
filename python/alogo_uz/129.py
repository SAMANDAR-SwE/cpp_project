
lists = []

lists = list(map(int, input().split()))
summa = 0 
for i in range(len(lists)):
    if lists[i] % 2 == 0 or lists[i] % 3 == 0 or lists[i] % 5 == 0:
        summa += lists[i]

print(summa)