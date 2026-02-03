import numpy as np

L = int(input())

maissiv = list(map(int, input().split()))

n, m = map(int, input().split())

if (m * n) > L:   
    for _ in range(((m * n)- L)):
        maissiv.append(0)

# for qator in range(4):
#     for ustun in range(5):


print(maissiv)