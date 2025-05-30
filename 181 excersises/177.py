def intercambiar(a, b):
    return b, a

x = 5
y = 10
print(f"Antes: x = {x}, y = {y}")
x, y = intercambiar(x, y)
print(f"Después: x = {x}, y = {y}")