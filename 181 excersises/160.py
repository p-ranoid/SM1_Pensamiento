import math

def es_cuadrado(x):
    if x < 0:
        return False
    s = math.isqrt(x)
    return s * s == x

def es_fibonacci(n):
    if n < 0:
        return False
    val = 5 * n**2
    return es_cuadrado(val + 4) or es_cuadrado(val - 4)

num = int(input("Ingresa un numero: "))
if es_fibonacci(num):
    print(f"{num} es un numero Fibonacci")
else:
    print(f"{num} NO es un numero Fibonacci")