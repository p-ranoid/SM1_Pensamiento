def es_numero_perfecto(numero):
    if numero <= 1:
        return False
    
    suma_divisores = 1
    
    for i in range(2, numero // 2 + 1):
        if numero % i == 0:
            suma_divisores += i
    
    return suma_divisores == numero

numero = int(input("Ingresa un numero para checkear si es perfecto: "))

if es_numero_perfecto(numero):
    print(f"{numero} es un número perfecto ✨.")
else:
    print(f"{numero} no es un número perfecto.")