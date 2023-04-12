def main():
    number = int(input("Please enter a number: "))
    if number < 0:
        print("Please enter a positive number")
    x = 0
    while x < number:
        x = x + 1
        Buzz = x % 5 == 0
        Fizz = x % 3 == 0
        if Buzz and Fizz:
            print(str(x) + " FizzBuzz")
        elif Buzz:
            print(str(x) + " Buzz")
        elif Fizz:
            print(str(x) + " Fizz")
        elif x != Buzz and x != Fizz:
            print(x)
        elif x != Buzz:
            print({}).format(x)
        elif x != Fizz:
            print({}).format(x)


if __name__ == "__main__":
    main()
