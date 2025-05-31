def contar_caracteres(cadena):
    return len(cadena)

texto = input("Ingresa un texto: ")
print(f"El texto tiene {contar_caracteres(texto)} caracteres.")