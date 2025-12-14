n_son = int(input())

massiv = list(map(int, input().split()))

a, b = map(int, input().split())

min_val = massiv[0]
for sonn in massiv:
    if sonn < min_val:
        min_val = sonn

summa = [] 
for index, son in enumerate(massiv):
    if index >= a-1 and index <=b-1:
        summa.append(f"{son / min_val:.1f}")
    else:
        summa.append(f"{son:.1f}")
print(" ".join(summa))


