def count_letters(phrase):
    """This function takes in the phrase entered and then looks at the
    letters in the phrase one by one and adds it to a dictionary and if the
    letter is already in the dictionary then it adds one to the letter. """
    phrase = phrase.lower()
    counter = {}
    for letter in phrase:
        if letter in counter:
            counter[letter] += 1
        elif letter != " ":
            counter[letter] = 1
    return counter


def main():
    phrase = input("Enter a phrase: ")
    phrase = phrase.lower()
    count = count_letters(phrase)
    print(count)
