sum = 0 
count = 0
average = 0
print("Please enter 10 integers to find your averages. ")
for i in range(10): 
    user_input1 = input("Please enter your integer: ")
    count = count + 1
    sum = float(user_input1) + sum
    average = sum / count
    print (average)
print("Your average is: ")
print(average)

