text = ""
text = str(input())
summa_a = 0
summa_y = 0
for i in text:
    if i == "A":
        summa_a += 1
    if i == "Y":
        summa_y += 1

print(summa_a, summa_y, sep="\n")