import random

def generar_uniforme(n, min_val, max_val):
    return [random.uniform(min_val, max_val) for _ in range(n)]

print(generar_uniforme(5, 0, 1))