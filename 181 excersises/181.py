def main():
    n = int(input("Ingresa el tamaño de la lista: "))
    arr = []
    print(f"Ingresa los {n} valores de la lista:")
    for i in range(n):
        elemento = int(input(f"Valor {i + 1}: "))
        arr.append(elemento)
    print("\nLista ingresada:")
    print(" ".join(map(str, arr)))

if __name__ == "__main__":
    main()