from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))

x, y = map(int,input().split())

count = 0
for num in massiv:
    if num < x or num > y:
        count += 1

print(count)


