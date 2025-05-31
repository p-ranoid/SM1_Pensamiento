def decimal_a_binario(decimal):
    if decimal == 0:
        return "0"
    
    bits = []
    n = decimal
    
    while n > 0:
        bits.append(str(n % 2))
        n = n // 2
    
    return ''.join(reversed(bits))

numero = int(input("Ingresa un numero decimal: "))
binario = decimal_a_binario(numero)
print(f"El numero {numero} en binario es: {binario}")