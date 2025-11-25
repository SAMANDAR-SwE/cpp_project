from math import log, pow, sqrt
a, x = map(float, input().split())
TT = ( sqrt(x - 1) + sqrt(x + 2) + log(sqrt(a * x * x) + 2) ) / ( sqrt(sqrt(x + 2) + sqrt(x + 24) + pow(x, 5) ) )
print("%.2f\n" % TT)