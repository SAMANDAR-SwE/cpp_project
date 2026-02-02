import numpy as np

# 1. n va m ni o'qib olamiz (qatorlar va ustunlar soni)
try:
    line1 = input().split()
    if not line1:
        exit()
    n, m = map(int, line1)

    # 2. Matritsa elementlarini o'qib olamiz
    matrix_data = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix_data.append(row)

    # NumPy massiviga o'tkazamiz
    A = np.array(matrix_data)

    # 3. Har bir qator yig'indisidan vektor hosil qilamiz (axis=1 qator bo'ylab hisoblaydi)
    row_sums = np.sum(A, axis=0)

    # 4. Eng katta va eng kichik elementni topamiz
    max_val = np.max(A)
    min_val = np.min(A)

    # Natijalarni chiqarish
    # Vektor elementlarini bo'sh joy bilan ajratib chiqaramiz
    print(*(row_sums))
    # Eng katta va eng kichik elementni chiqaramiz
    print(f"{max_val} {min_val}")

except EOFError:
    pass