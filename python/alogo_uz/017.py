from math import pi,cos,log2,tan
x, y = map(float, input().split())
f1 = (2 * tan(x + pi / 6) ) / (( 1 / 3 ) +pow(cos(y + x * x), 2)) + log2(x * x + 2)
print("%.2f\n" % f1)