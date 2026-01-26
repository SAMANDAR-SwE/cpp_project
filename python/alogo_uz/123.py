# Elementlar sonini o'qiymiz
n = int(input())

# Massivni o'qiymiz va uni ro'yxatga aylantiramiz
a = list(map(int, input().split()))

# 1. Juft o'rinli elementlar yig'indisini hisoblaymiz (index 0, 2, 4...)
summa = sum(a[0::2])

# 2. Har bir elementni tekshiramiz va natijani shakllantiramiz
result = []
for i in range(n):
    if a[i] % 2 != 0: # Agar element toq bo'lsa
        # Yig'indiga bo'lamiz va 10^-2 (0.01) aniqlikda chiqaramiz
        res = a[i] / summa
        result.append(f"{res:.2f}")
    else:
        # Agar element juft bo'lsa, uni o'zini chiqaramiz (shartga ko'ra)
        result.append(f"{a[i]:.2f}")

# Natijani bitta qatorda chop etish
print(*(result))