s = int(input("Please enter the number of side: "))
length = int(input("Please enter the length of one side: "))
n = (360 / s)
if s < 3:
    print("Enter a number greater or equal to 3!")
if s >= 3:
    import turtle
    t = turtle.Turtle()
    for i in range(s):
        t.forward(length)
        t.left(n)
    turtle.done()
