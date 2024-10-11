def add(a, b):
    return a + b


def subtract(a, b):
    return a - b


def multiply(a, b):
    return a * b


def divide(a, b):
    if b == 0:
        return "Error: Division by zero is not allowed."
    return a / b


operations_dict = {
    "+": add,
    "-": subtract,
    "*": multiply,
    "/": divide
}

number1 = int(input("Enter 1st number: "))

for symbol in operations_dict:
    print(symbol)

continue_flag = True
while continue_flag:
    op_symbol = input("Pick an Operation: ")

    if op_symbol not in operations_dict:
        print("Invalid operation. Please try again.")
        continue

    number2 = int(input("Enter 2nd number: "))

    calculator_function = operations_dict[op_symbol]
    output = calculator_function(number1, number2)

    print(f"{number1} {op_symbol} {number2} = {output}")

    should_continue = input(f"Enter 'y' to continue calculation with {output} or 'n' to exit: ").lower()

    if should_continue == 'y':
        number1 = output
    else:
        continue_flag = False
        print("Bye")
