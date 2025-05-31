def imprimir_zig_zag(filas, columnas):
    matriz = [[0 for _ in range(columnas)] for _ in range(filas)]
    valor = 1
    hacia_abajo = False

    for col in range(columnas):
        if hacia_abajo:
            for fila in range(filas-1, -1, -1):
                matriz[fila][col] = valor
                valor += 1
        else:
            for fila in range(filas):
                matriz[fila][col] = valor
                valor += 1
        hacia_abajo = not hacia_abajo
    for fila in matriz:
        print("\t".join(map(str, fila)))

filas = int(input("Ingresa el numero de filas: "))
columnas = int(input("Ingresa el número de columnas: "))

imprimir_zig_zag(filas, columnas)