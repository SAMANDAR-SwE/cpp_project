# 2. While tsikli bilan
def generate(n: int) -> list:
    result = []
    i = 0
    while i <= n:
        result.append([1])
        i += 1

    for h in range(1, n):
        return result[h][h - 1] 


gens = generate(5)

print(gens)