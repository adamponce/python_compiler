def max_(elements):
    maximum = elements[1]
    for i in range(len(elements)):
        if maximum < elements[i]:
            maximum = elements[i]
    print("The maximum of the list is ", maximum)


def min_(elements):
    minimum = elements[1]
    for i in range(len(elements)):
        if minimum > elements[i]:
            minimum = elements[i]
    print("The minimum of the list is ", minimum)
    

def sum_(elements):
    i = 1
    while i <= len(elements):
        total = elements[i] 
        i = i + 1
        if i > 0:
            total = total + elements[i]
    print("The sum of the list is ", total)

"""def midpoint(elements):  
            

def linear_search(elements):


def average(elements):


def reverse(elements):
    for i in range len(elements):
        j = (len(elements)) - i
    rev_elements = elements[j, i]

"""

def main():    
    elements = [3, 5, 6, 8, 1, 9, 12, 15, 2, 2]
    max_(elements)
    min_(elements)
    sum_(elements)
    '''midpoint(elements)
    linear_search(elements)
    average(elements)
    reverse(elements)'''
