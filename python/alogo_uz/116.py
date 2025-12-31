from math import log
n_son = int(input())

massiv = list(map(int, input().split()))

maxs = massiv[0] 
for mas in massiv:
    if mas > maxs:
        maxs = mas

for mass in massiv:
    print(f"{(mass / maxs):.2f}", end=" ")