def collatz_len(number):
    if number % 2 == 0:
        even = number // 2
        return even
    elif number % 2 != 0:
        odd = (3 * number) + 1
        return odd


def main():
    n = int(input("Please enter a starting number: "))
    lst = [n]
    while n != 1:
        n = collatz_len(int(n))
        lst.append(n)
    length = len(lst)
    print("The length of the Collatz sequence is: " + str(length))


if __name__ == '__main__':
    main()
