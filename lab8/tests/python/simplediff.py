def simplediff(file_name, file_name1):
    """This function looks for the differences between the two entered files by
    checking letter by letter in each line and seeing if they match, if they
    don"t then it print's out both of the lines from both files and then
    tells you which line and which character the difference was spotted."""
    counter_line = 0
    with open(file_name1, "r") as file1:
        with open(file_name, "r") as file2:
            line1 = " "
            line2 = " "
            while line1 != '' or line2 != '':
                line1 = file1.readline()
                line2 = file2.readline()
                counter_char1 = 0
                counter_char2 = 0
                while counter_char1 < len(line1) or counter_char2 < len(line2):
                    if len(line1) > 0:
                        x = line1[counter_char1]
                    else:
                        x = ''
                    if len(line2) > 0:
                        y = line2[counter_char2]
                    else:
                        y = ''
                    if x != y:
                        print(str(counter_line + 1) + "c" + str(counter_char1))
                        print("< " + line1)
                        print("> " + line2)
                        break
                    if counter_char1 < len(line1):
                        counter_char1 += 1
                    if counter_char2 < len(line2):
                        counter_char2 += 1
                counter_line += 1


def main():
    try:
        file_name = input("Enter file name >>> ")
        file_name1 = input("Enter second file name >>> ")
        simplediff(file_name, file_name1)
    except FileNotFoundError:
        print("The file(s) entered does not exist!")
        main()
    except IsADirectoryError:
        print("You tried to open a directory as a file!")
        main()


if __name__ == "__main__":
    main()
