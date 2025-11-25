n_ta_son = int(input())
sonli_massilv = list(map(int, input().split()))
summa = 0
summa_a = 0
for i in range(n_ta_son):
    summa += sonli_massilv[i]
for j in range(n_ta_son):
    if summa / n_ta_son > sonli_massilv[j]:
        summa_a += sonli_massilv[i]
print(summa_a)
