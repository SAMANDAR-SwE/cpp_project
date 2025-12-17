n_son = int(input())

massiv = list(map(int, input().split()))

a, b = map(int, input().split())

min_val = massiv[0]
for sonn in massiv:
    if sonn < min_val:
        min_val = sonn

summa = [] 
for index, son in enumerate(massiv):
    
print(" ".join(summa))


