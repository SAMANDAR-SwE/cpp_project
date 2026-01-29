import numpy as np

print("Matritsani kiriting (Tugallash uchun bo'sh qator qoldiring):")

# 1. Avval 'rows' degan bo'sh ro'yxat yaratamiz
rows = [] 

while True:
    line = input()
    if not line: 
        break
    # Har bir qatorni sonlarga aylantirib 'rows'ga qo'shamiz
    row = list(map(int, line.split()))
    rows.append(row)

# 2. Faqat 'rows' to'lganidan keyingina uni numpy massiviga o'tkazamiz
matrix = np.array(rows)

print("\nHosil bo'lgan matritsa:")
print(matrix)