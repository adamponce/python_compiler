import math
op = str(input("Which operation? sqrt (s), arcsin (a), arccos (c), arctan (t): "))
num = float(input("Enter a number to use: "))
if op == "s" and num >= 0:
    sqrt = str(math.sqrt(num))
    str(print("The square root of " + str(num) + " = " + sqrt))
elif op == "s":
    print("Please enter a positive number")
elif op == "a" and -1 <= num <= 1:
    arcsin = str(math.asin(num))
    str(print("The arcsin of " + str(num) + " = " + arcsin))
elif op == "a":
    print("Please enter a number between -1 and 1!")
elif op == "c" and -1 <= num <= 1:
    arccos = str(math.acos(num))
    str(print("The arccos of " + str(num) + " = " + arccos))
elif op == "c":
    print("Please enter a number between -1 and 1!")
elif op == "t":
    atan = str(math.atan(num))
    str(print("The arctan of " + str(num) + " = " + atan))
