from math import sqrt, cos, pow, sin, e 
a, x, y = map(float, input().split())
TT = sqrt(y * y + pow(e, x) + sqrt(pow(e, x) + (a / (x * x + 2)) ) + (pow(cos(x), 2) / sin(x * x) ) )  + pow(cos(x), 3)
print("%.2f" % TT)
