from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))


summa = 0
count = 0
for num in range(n_son):
    if massiv[num] % 2 == 1:
        summa += massiv[num]  
        count += 1
print(f"{(summa / count):.2f}")
