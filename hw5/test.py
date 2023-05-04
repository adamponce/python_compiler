"""
The user is able to see how long it takes for a collatz sequence.
collatz.py
Author: Adam Schmidt
date: Sept. 25, 2018
Assignment: Lab3 
"""

def collatz_len(startnum):

    sum = 1
    while (startnum > 1):
        if (startnum % 2 == 0):
            sum = sum + 1
            startnum = startnum / 2
        elif (startnum % 2 != 0):
            sum = sum + 1
            startnum = (3 * startnum) + 1
    return sum


def main():
    startnum = int(input("Please enter a positive starting number: "))
    collatz_len(startnum)
    print("Length of Collatz is: " + str(collatz_len(startnum)))
