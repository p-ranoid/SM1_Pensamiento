def encontrar_indice(lista, elemento):
    for i in range(len(lista)):
        if lista[i] == elemento:
            return i
    return -1

tamaño = int(input("Ingresa el tamaño de la lista: "))
lista = []

print("Ingresa los valores de la lista:")
for i in range(tamaño):
    elemento = int(input(f"Valores {i+1}: "))
    lista.append(elemento)

elemento_buscar = int(input("Ingrese el valor a buscar: "))

indice = encontrar_indice(lista, elemento_buscar)

if indice != -1:
    print(f"El valor {elemento_buscar} se encuentra en la lista {indice}")
else:
    print(f"El valor {elemento_buscar} no se encuentra en la lista")