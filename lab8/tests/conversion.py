print("Enter a number and we will convert it to feet, yards, and miles.")
user_input = input("Type a measurement in meters: ")
print(user_input + " meters")
feet = float(user_input) * 3.281
yards = float(user_input) * 1.094
miles = float(user_input) * 0.0006214
print("The measurement in feet is: ")
print(feet)
print("The measurement in yards are: ")
print(yards)
print("The measurement in miles are: ")
print(miles)
