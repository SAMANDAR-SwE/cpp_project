n_son = int(input())

massiv = list(map(int, input().split()))

a, b = map(int, input().split())


summa = 0
count = 0
for index, son in enumerate(massiv):
    if index >= a-1 and index <= b-1:
        summa += son
        count += 1
print("%.1f" % (summa / count))



