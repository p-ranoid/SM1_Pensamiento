def conjunto_cantor(inicio, fin, iteraciones):
    resultado = [(inicio, fin)]
    for _ in range(iteraciones):
        nuevo = []
        for a, b in resultado:
            tercio = (b - a) / 3
            nuevo.append((a, a + tercio))
            nuevo.append((b - tercio, b))
        resultado = nuevo
    return resultado

for intervalo in conjunto_cantor(0, 1, 3):
    print(intervalo)