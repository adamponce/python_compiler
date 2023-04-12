
def pal_check(word):
    if len(word) <= 1:
        return True
    else:
        if word[0] != word[len(word)-1]:
            return False
        elif word[0] == word[len(word)-1]:
            pal_check(word[1:len(word)-1])
            return True

def main():
    word = input("Please input a string to see if it is a palindrome: ")
    print(pal_check(word))

if __name__ == "__main__":
    main()
