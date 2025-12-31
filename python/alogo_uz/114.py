from math import sin

n_son = int(input())
massiv = list(map(int, input().split()))


product = 1
for num in massiv:
    if num % 10 == 0:
        product *= num

print(f"{sin(product):.2f}")
