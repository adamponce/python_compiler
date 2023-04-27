def rpn_calculator(operation):
    counter = 0
    digit_number = " "
    stack = []
    enough_operators = True
    result_operation = 0
    is_operator = False
    while counter < len(operation) and enough_operators:
        if operation[counter].isdigit():
            digit_number = digit_number + operation[counter]
            is_operator = False
        elif operation[counter] == "/":
            if len(stack) >= 2:
                second_operand = stack.pop()
                first_operand = stack.pop()
                result_operation = float(first_operand) / float(second_operand)
                stack.append(str(result_operation))
                is_operator = True
            else:
                enough_operators = False
        elif operation[counter] == "*":
            if len(stack) >= 2:
                second_operand = stack.pop()
                first_operand = stack.pop()
                result_operation = float(first_operand) * float(second_operand)
                stack.append(str(result_operation))
                is_operator = True
            else:
                enough_operators = False
        elif operation[counter] == "+":
            if len(stack) >= 2:
                second_operand = stack.pop()
                first_operand = stack.pop()
                result_operation = float(first_operand) + float(second_operand)
                stack.append(str(result_operation))
                is_operator = True
            else:
                enough_operators = False
        elif operation[counter] == "-":
            if len(stack) >= 2:
                second_operand = stack.pop()
                first_operand = stack.pop()
                result_operation = float(first_operand) - float(second_operand)
                stack.append(str(result_operation))
                is_operator = True
            else:
                enough_operators = False
        elif operation[counter] == " " and not is_operator:
            stack.append(digit_number)
            digit_number = " "
        counter += 1
    if len(stack) > 1:
        return "Not enough operands"
    elif not enough_operators:
        return "Not enough numbers"
    else:
        return int(result_operation)


def main():
    operation = input("Enter rpn operation >>> ")
    print(rpn_calculator(operation))


if __name__ == "__main__":
    main()
