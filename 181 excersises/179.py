def encontrar_maximo(arreglo):
    if not arreglo:
        return None

    maximo = arreglo[0]
    ptr = 1  
    
    while ptr < len(arreglo):
        if arreglo[ptr] > maximo:
            maximo = arreglo[ptr]
        ptr += 1 
    
    return maximo

tamaño = int(input("Ingresa el tamaño de la lista: "))
arreglo = []
print(f"Ingresa los {tamaño} valores:")
for i in range(tamaño):
    elemento = int(input(f"Valores {i+1}: "))
    arreglo.append(elemento)

maximo = encontrar_maximo(arreglo)
print(f"El valor máximo es: {maximo}")