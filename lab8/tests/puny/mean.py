add = 0
count = 0
running_average = 0


for x in range(10):
    user_input = float(input("Enter a number: "))
    count = (count + 1)
    add = float(user_input + add)
    running_average = float(add / count)
    print(str(running_average))
