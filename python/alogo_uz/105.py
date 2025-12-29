n_son = int(input())

massiv = list(map(int, input().split()))

a, b = map(int, input().split())

summa = 0
count = 0 
for i in range(n_son):
    print(i)
    if i < a - 1 or i > b - 1: 
        summa += massiv[i]
        count += 1
        print(massiv[i], " ", i)

print(summa / count)