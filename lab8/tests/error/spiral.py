import turtle
usr_input = int(input("Enter a degree: "))
count = 10

t1 = turtle.Turtle()
t1.speed("fastest")
for x in range (128):
    count = (count + 1)
    t1.left(usr_input)
    t1.forward(count)
    

turtle.done()
