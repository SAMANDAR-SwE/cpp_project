from math import log
lists = []
lists = list(map(int, input().split()))

summa = 0 
for i in lists:
    summa += i
summa = 0 
count = 0 
for i in range(len(lists)):
    if lists[i] % 2 == 0:
        summa += lists[i]
        count += 1

print("%.2f" % (summa / count))