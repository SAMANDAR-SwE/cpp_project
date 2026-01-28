from math import log
lists = []
lists = list(map(int, input().split()))

summa = 0 
for i in lists:
    summa += i
mins = min(lists)
for i in range(len(lists)):
    if lists[i] < 0:
        lists[i] = (mins ** 2)


for i in lists:
    print(f"{i:.0f}", end=" ")