import ctypes

def mostrar_info(variable, nombre):
    valor = variable
    direccion = id(variable)
    tamaño = ctypes.sizeof(ctypes.c_void_p)
    
    print(f"\nVariable: {nombre}")
    print(f"Valor: {valor}")
    print(f"Dirección de memoria: {direccion}")
    print(f"Tamaño (referencia): {tamaño} bytes")

if __name__ == "__main__":
    entero = 42
    decimal = 3.1416
    caracter = 'A'
    texto = "Probando memoria en Python"
    lista = [1, 2, 3]

    mostrar_info(entero, "entero")
    mostrar_info(decimal, "decimal")
    mostrar_info(caracter, "caracter")
    mostrar_info(texto, "texto")
    mostrar_info(lista, "lista")