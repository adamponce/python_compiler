import turtle
usr_input = int(input("Enter a positive integer: "))
t1 = turtle.Turtle()
t1.speed("fastest")
t1.penup()
t1.setposition(-500, 0)
t1.pendown()
for t in range(3):
    t1.forward(usr_input)
    t1.left(120)
t1.forward(usr_input * 3)
for x in range(4):
    t1.left(90)
    t1.forward(usr_input)
t1.forward(usr_input)
for i in range(5):
    t1.forward(usr_input)
    t1.left(72)
for m in range(3):
    t1.forward(usr_input)
for y in range(5):
    t1.left(60)
    t1.forward(usr_input)
t1.left(60)
t1.forward(usr_input * 3)
t1.forward(usr_input / 2)
for g in range(7):
    t1.left(51.429)
    t1.forward(usr_input)
t1.forward(usr_input)
turtle.done()
