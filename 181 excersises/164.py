import math

def es_potencia_exacta(n):
    if n == 1: return True
    for a in range(2, math.isqrt(n) + 1):
        b = 2
        while a**b <= n:
            if a**b == n: return True
            b += 1
    return False

n = int(input("Ingrese número: "))
print(f"{n} {'es' if es_potencia_exacta(n) else 'no es'} potencia exacta")