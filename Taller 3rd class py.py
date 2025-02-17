#Ex 1 - programa que sume, reste, multiplique, divida y %

num1 = int (input("number 1: "))
num2 = int (input("number 2: "))

sum = num1+num2
print(f'sum {sum}')

minus = num1-num2
print(f'minus {minus}')

multiply = num1*num2
print(f'multiply {multiply}')

divide = num1/num2
print(f'divide {divide}')

modulo = num1 % num2
print(f"modulo {modulo}")

#Ex 2 an item with discount of 15%

Discount = 15/100
Value = float (input("This is the the full value for the product "))

Discounted = Value*Discount
Price = Value-Discounted

print(f'Final price {Price}')

#Ex 3 for a value 10 add 5, minus 3, multiply 2, divide in 4

Initial = int(10)
print (f'This is your initial number: 10')

Sum = Initial+5
print(f'We added 5 to the initial number {Sum}')

Minus = Sum-3
print(f'We substracted 3 to the initial number {Minus}')

Multiply = Minus*2
print(f'We multiply it by 2 and get {Multiply}')

Divide = Multiply/4
print(f'We divided in 4 {Divide}')
