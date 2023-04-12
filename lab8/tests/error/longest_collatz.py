def main():
    import collatz
    longest = []
    for n in range(1, 1000001):
        lst = [n]
        while n != 1:
            n = collatz.collatz_len(int(n))
            lst.append(n)
        longest.append(len(lst))
    position = longest.index(max(longest)) + 1
    print("The longest chain is produced by " + str(position) + " with a sequence length of " + str(max(longest)))


if __name__ == "__main__":
    main()
