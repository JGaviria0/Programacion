from math import pi

n , k = map(int,input().split())
d, s = map(int,input().split())

answ = ((d*n - s*k)/(n-k))

print(answ if (answ <= 100 and answ > 0) else 'impossible')