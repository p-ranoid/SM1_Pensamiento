def calcular_area(base, altura):
    return (base * altura) / 2

base = float(input("Ingresa la base del triangulo: "))
altura = float(input("Ingresa la altura del triangulo: "))

area = calcular_area(base, altura)
print(f"El area del triangulo es: {area}")