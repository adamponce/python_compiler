import math
shape = input("Enter a shape(circle, square, or rectangle): ")
if shape == "circle":
    r = float(input("Please enter the radius of the circle: "))
    c = str(math.pi * (r * 2))
    a = str(math.pi * (math.pow(r, 2)))
    str(print("The circumference of the circle is " + c))
    str(print("The area of the circle is " + a))
if shape == "rectangle":
    w = float(input("Please enter the width of the rectangle: "))
    h = float(input("Please enter the height of the rectangle: "))
    p = str(2 * (h + w))
    ar = str(w * h)
    str(print("The perimeter of the rectangle is: " + p))
    str(print("The area of the rectangle is: " + ar))
if shape == "square":
    length = float(input("Please enter the length of one side of the square: "))
    ps = str(length * 4)
    area = str(math.pow(length, 2))
    str(print("The perimeter of the square is: " + ps))
    str(print("The area of the square is: " + area))
