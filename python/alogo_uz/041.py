x, y, z = map(float, input().split())
if x < 1 and y < 1 and z < 1 and x < y < z:
    x = (y + z) / 2
elif x < 1 and y < 1 and z < 1 and y < x < z:
    y = (x + z) / 2
elif x < 1 and y < 1 and z < 1 and z < x < y:
    z = (y + x) / 2
else:
    x, z, y

print(x, y, z)