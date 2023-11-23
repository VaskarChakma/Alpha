# a = int(input("A = "))
# b = int(input("B = "))

# operation = input("Operation (+, -, *, /) : ")

# if operation == '+':
#     print(a+b)
# elif operation == '-':
#     print(a-b)
# elif operation == '*':
#     print(a*b)
# else:
#     print(a/b)

# name = "Bangladesh" # StringArray
# l = len(name)

# for x in name:
#     print(f"{name}")



# def add(x, y):
#     return x + y
# def subtract(x, y):
#     return x - y
# def multiply(x, y):
#     return x * y
# def divide(x, y):
#     return x / y

# print("Select operation: ")
# print("1 for Addition ")
# print("2 for Subtraction ")
# print("3 for Multipliplication ")
# print("4 for Division ")

# while True:
#     choice = input("Enter your choice  ")

#     if choice in ('1', '2', '3', '4'):
#         num1 = float(input("Enter first number: "))
#         num2 = float(input("Enter second number: "))
#         print(" Please enter a number.")

#         if choice == '1':
#             print(num1, "+", num2, "=", add(num1, num2))
            
#         elif choice == '2':
#             print(num1, "-", num2, "=", subtract(num1, num2))
            
#         elif choice == '3':
#             print(num1, "*", num2, "=", multiply(num1, num2))
            
#         elif choice == '4':
#             print(num1, "/", num2, "=", divide(num1, num2))

#     else:
#         print("Invalid Input")

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Amr kaj sesh .") 
while True:
    opt = int(input("Enter your option: "))
    a = int(input("A = "))
    b = int(input("B = "))
    if opt == 1:
        print(f"{a} + {b} = {a + b}")
    elif opt == 2:
        print(f"{a} - {b} = {a - b}")
    elif opt == 3:
        print(f"{a} * {b} = {a * b}")
    elif opt == 4:
        print(f"{a} / {b} = {a / b}")
    else:
        break




