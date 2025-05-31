def secuencia_lucas(n):
    if n == 0: return []
    if n == 1: return [2]
    if n == 2: return [2, 1]
    
    seq = [2, 1]
    for i in range(2, n):
        seq.append(seq[i-1] + seq[i-2])
    return seq

n = int(input("Ingrese N: "))
print(secuencia_lucas(n))