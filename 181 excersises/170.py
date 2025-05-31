def es_palindromo(palabra):
    return palabra == palabra[::-1]

palabra = input("Ingresa una palabra: ")
print("La palabra", "ES 🐘" if es_palindromo(palabra) else "NO es :C", "un paquidermo")