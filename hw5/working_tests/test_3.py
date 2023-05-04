def is_even(num):
    if num % 2 == 1:
        return 0
    else:
        return 1


def main():
    user_input = int(input("Please enter a number: "))
    while user_input > 0:
        answer = is_even(user_input)
        if answer == 1:
            print(str(user_input) + " is an even number")
            user_input = int(input("Please enter a number: "))
        else:
            print(str(user_input) + " is an odd number")
            user_input = int(input("Please enter a number:"))
