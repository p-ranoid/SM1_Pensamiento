def suma_cuadrados(n):
    return n * (n + 1) * (2*n + 1) // 6

n = int(input("Ingresa N: "))
print(f"Suma de cuadrados: {suma_cuadrados(n)}")