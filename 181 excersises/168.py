def euclides_extendido(a, b):
    if b == 0: return a, 1, 0
    mcd, x1, y1 = euclides_extendido(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return mcd, x, y

a = int(input("Ingresa a: "))
b = int(input("Ingresa b: "))
mcd, x, y = euclides_extendido(a, b)
print(f"MCD: {mcd}")
print(f"Coeficientes (x, y): ({x}, {y})")