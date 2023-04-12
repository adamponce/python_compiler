def word_counter(file_name, word):
    """This function opens the file entered and then goes through and
    counts who many times the string entered appears in that file."""
    with open(file_name, "r") as output_file:
        count = output_file.read().count(word)
        return count


def main():
    try:
        file_name = input("Enter the name of the file: ")
        word = input("Enter the string that is being searched for: ")
        print("The string " + str(word) + " appears " + str(word_counter(
            file_name, word)) + " time(s) in the file " + str(file_name))
    except FileNotFoundError:
        print("The file entered does not exist!")
        main()
    except IsADirectoryError:
        print("You tried to open a directory as a file!")
        main()


if __name__ == "__main__":
    main()
