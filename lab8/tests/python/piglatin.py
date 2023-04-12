def pigLatConv(word):
    """takes in a word, converts it to piglatin and undercase"""
    word = word.lower()
    consList = ["b", "c", "d", "f", "g", "h", "j", "k", "l", "m",
                "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"]
    wordcons = ""
    restword = ""
    lastly = "a" + "y"
    if word[0] in consList:
        for i in range(len(word)):
            if word[i] in consList:
                wordcons = wordcons + word[i]
            else:
                restword = restword + word[i:]
                break
        finalword = restword + wordcons + lastly
    else:
        finalword = word + "w" + "a" + "y"
    return finalword


def seperatefunction(filename):
    punctList = [".", ",", "!", "?", ";", "-", ";"]
    word = ""
    newword = ""
    newList = []
    with open(filename, 'r') as input_file:
        contents = input_file.readlines()
        for i in range(len(contents)):
            contents[i] = contents[i].strip("\n")
            contents[i] = contents[i].split(" ")
            for j in range(len(contents[i])):
                word = ""
                for k in range(len(contents[i][j])):
                    if contents[i][j][k] in punctList:
                        word = word + ""
                    else:
                        word = word + contents[i][j][k]
                newword = pigLatConv(word)
                newList.append(newword)
        return " ".join(newList)

def main():
    filename = input("Please enter file name: ")
    try:
        with open(filename, 'r'):  # if file does open
            writefile = input(
                "Please enter file name to write to (ps. if file already exists it will ask for files again so no files will be replaced): ")
            try:
                with open(writefile, 'r'):
                    main()
            except FileNotFoundError:
                outputfile = open(writefile, 'w')
                print(seperatefunction(filename))
    except FileNotFoundError:
        print('File "{}" not found'.format(filename))
        main()


if __name__ == "__main__":
    main()
