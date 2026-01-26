
lists = []

lists = list(map(int, input().split()))
k, l = map(int, input().split())
summa = 0 
for i in range(len(lists)):
    if i >= k - 1 and i <= l - 1:
        summa += pow(lists[i], 3)


print(summa)
