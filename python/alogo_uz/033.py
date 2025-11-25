x, y, z = map(float, input().split())
print(max((x + y + z), x, y, z), pow(min((x + (y / 2)),x, y, z), 2))
