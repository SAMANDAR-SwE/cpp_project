n = int(input())

list = list(map(int, input("Massiv elementlari: ").split()))
summa = 0
for count in list:
    summa += count
summa_kichik = 0
n_son = 0
for count1 in list:
    if (summa / n) > count1:
        summa_kichik += count1
        n_son += 1

print("%.2f" % (summa_kichik / n_son))