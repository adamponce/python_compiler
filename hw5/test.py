elements = [3, 2, 4, 5, 12]

for i in range (len(elements)):
    j = (len(elements)) - i
    rev_elements = elements[j, len(elements)] # IndentationError, list bug

print rev_elements # illegal print

