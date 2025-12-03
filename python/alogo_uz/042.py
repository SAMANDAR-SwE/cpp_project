a, b, c, d = map(float, input().split())
maxx = max(a, b, c, d)
minn = min(a, b, c, d)
if a <= b <= c <= d:  
    print(maxx, maxx, maxx, maxx)
else:
    print(minn, minn, minn, minn)