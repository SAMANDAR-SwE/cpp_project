from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))


summa= 1
for num in range(n_son):
    if num % 2 == 1:
        summa += massiv[num]

print(f"{summa:.2f}")
