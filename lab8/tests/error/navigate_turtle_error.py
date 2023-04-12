def main():
    import turtle
    t = turtle.Turtle()
    direction = input("Please enter a direction: ")
    while direction != "stop":
        if direction == "left" or direction == "right":
            degree = float(input("Please enter a degree: "))
            if direction == "left" and 0 <= degree <= 360:
                t.left(degree)
                direction = input("Please enter a direction: ")
            elif direction == "right" and 0 <= degree <= 360:
                t.right(degree)
                direction = input("Please enter a direction: ")
            else:
                print("Enter a degree between 0 and 360 degrees")
        elif direction == "forward":
            t.forward(100)
            direction = input("Please enter a direction: ")
        else:
            print("Enter a valid command!")
            direction = input("Please enter a direction: ")
    turtle.Screen().bye()


if __name__ == "__main__":
    main()
