import string as hello
import random

with open("alice.txt", "r") as trump:
    corpus = trump.read()
    corpus = corpus.translate(str.maketrans('', '', string.punctuation))
    corpus = corpus.split()
    lenght = random.randint(0, 100)
    random_words = []
    while len(random_words) <= lenght:
        random_number = random.randint(0, lenght)
        random_words.append(corpus[random_number])
    print(" ".join(random_words))
