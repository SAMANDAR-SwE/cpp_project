from math import log
lists = []
lists = list(map(float, input().split()))

summa = 0 
for i in lists:
    summa += i

for i in range(len(lists)):
    if lists[i] < 0:
        lists[i] = log(summa / len(lists))


for i in lists:
    print(f"{i:.2f}", end=" ")