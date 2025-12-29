from math import log
n_son = int(input())

massiv = list(map(int, input().split()))

K, M = map(int, input().split())

product = 1
for i in range(n_son):
    if K == massiv[i] or M == massiv[i] :
        product *= massiv[i]

print(f"{product:.0f}")
