n = int(input())
a = list(map(int, input().split()))

if n > 1:
    # minimum indeksini topish
    min_idx = 0
    for i in range(1, n):
        if a[i] < a[min_idx]:
            min_idx = i
    
    
    a[min_idx], a[n-1] = a[n-1], a[min_idx]

print(*a)