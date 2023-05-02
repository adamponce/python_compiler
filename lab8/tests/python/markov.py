def random_string(lst):
    """This function takes in the list generated from the file imputed by
    the user then creates the length of the phrase between 1 and 100 and
    then appends random words from the file into a list and then puts them
    together."""
    import random
    length_phrase = random.randint(0, 100)
    random_words = []
    while len(random_words) <= length_phrase:
        random_number = random.randint(0, length_phrase)
        random_words.append(lst[random_number])
    return " ".join(random_words)


def main():
    import string
    file = input("Enter the file name: ")
    with open(file, "r") as sample:
        file1 = sample.read()
        file1 = file1.translate(str.maketrans('', '', string.punctuation))
        transcript_lst = file1.split()
        print(random_string(transcript_lst))


if __name__ == "__main__":
    main()
