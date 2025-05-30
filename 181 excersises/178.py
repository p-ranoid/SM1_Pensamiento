def sumar_elementos(Lista):
    suma = 0
    indice = 0
    
    while indice < len(Lista):
        suma += Lista[indice]
        indice += 1
    
    return suma

tamaño = int(input("Ingresa el tamaño de la Lista: "))
Lista = []

print(f"Ingresa los {tamaño} valores:")
for i in range(tamaño):
    elemento = int(input(f"valores {i+1}: "))
    Lista.append(elemento)

total = sumar_elementos(Lista)
print(f"La suma de los valores es: {total}")