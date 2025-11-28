x, y = map(int, input().split())
if (x<y):
    x = (x + y) / 2
    y = (x * 2 * y)
else:
    y = (x + y) / 2
    x = (x * 2 * y)
print(x, y)
