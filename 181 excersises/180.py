def contar_caracteres(texto):
    contador = 0
    for caracter in texto:
        contador += 1
    return contador

texto = input("Ingresa un texto: ")
longitud = contar_caracteres(texto)
print(f"El texto tiene {longitud} caracteres.")