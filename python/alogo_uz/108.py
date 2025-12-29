n_son = int(input())

massiv = list(map(int, input().split()))



summa = 0
mins  = massiv[0] 
for i in range(n_son):
    if mins > massiv[i]:
        mins = massiv[i]


for son in massiv:
    print(f"{son / mins:.2f}", end=' ')
