import math

def factorial_stirling(n):
    if n == 0: return 1
    return math.sqrt(2 * math.pi * n) * (n / math.e)**n

n = int(input("Ingrese n: "))
print(f"Aproximación de {n}! ≈ {factorial_stirling(n)}")