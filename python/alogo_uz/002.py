from math import pi
r1, r2, r3 = map(int, input().split())
print("%.2f %.2f %.2f" % ( pi*pow(r1,2), pi*pow(r2,2), pi*pow(r3,2) ) )