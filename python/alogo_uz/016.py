from math import e
x, y = map(float, input().split())
print("%.2f" % ( ( ( x + y ) / ( y ** 2 + 
                abs( ( ( y ** 2 ) + 2 ) / ( x + (x ** 3) / 5 ) ) ) ) +
                e ** ( y + 2 ) ) )