n_son = int(input())

massiv = list(map(int, input().split()))



summa = 0
maxs  = massiv[0] 
for i in range(n_son):
    if maxs < massiv[i]:
        maxs = massiv[i]


for son in massiv:
    print(f"{son / maxs:.2f}", end=' ')
