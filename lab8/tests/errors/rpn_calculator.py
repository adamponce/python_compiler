import math
def rpn_calc(input_nums):
    stack_calc = []
    input_order = input_nums.split(" ")
    for i in range(len(input_order)):
        if input_order[i] == "+":
            if len(stack_calc) < 2:
                return ("Not enough numbers are stored for +.")
            else:
                first = int(stack_calc.pop())
                second = int(stack_calc.pop())
                final = first + second
                stack_calc.append(final)
        elif input_order[i] == "-":
            if len(stack_calc) < 2:
                return ("Not enough numbers are stored for -.")
            else:
                first = int(stack_calc.pop())
                second = int(stack_calc.pop())
                final = second - first
                stack_calc.append(final)
        elif input_order[i] == "*":
            if len(stack_calc) < 2:
                return ("Not enough numbers are stored for *.")
            else:
                first = int(stack_calc.pop())
                second = int(stack_calc.pop())
                final = second * first
                stack_calc.append(final)
        elif input_order[i] == "/":
            if len(stack_calc) < 2:
                return ("Not enough numbers are stored for /.")
            else:
                first = int(stack_calc.pop())
                second = int(stack_calc.pop())
                final = second / first
                stack_calc.append(final)
        else:
            stack_calc.append(input_order[i])
    if len(stack_calc) > 1 or len(stack_calc) < 1:
        return ("More or less than one number stored after the expression is evaluated.")
    else:
        return stack_calc


def main():
    input_nums = input("Please enter your equation: ")
    print(rpn_calc(input_nums))


if __name__ == "__main__":
    main()
