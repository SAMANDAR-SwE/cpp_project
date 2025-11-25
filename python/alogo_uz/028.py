from math import log, pow, cos, sin 
a, x = map(float, input().split())
bb1 = x * sin((x/2) + (x/3) + (x/4)) + ( (log((x ** 2) - 2) + pow(3, a)) / (cos(x + 3) * sin(x + 3) + 8) )
print("%.2f" % bb1)
