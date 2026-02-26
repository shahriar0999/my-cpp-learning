Y, W = map(int, input().split())

m = max(Y, W)
numerator = 7 - m
denominator = 6

# Simplify the fraction
from math import gcd
g = gcd(numerator, denominator)

print(f"{numerator//g}/{denominator//g}")