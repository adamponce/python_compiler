file_name = input("enter: ")
file_name2 = input("enter: ")
counter_line = 0
counter_char = 0
with open(file_name, "r") as file:
    line = file.readlines()
    print(line)
with open(file_name2, "r") as file2:
    line2 = file2.readlines()
    print(line2)

if len(line) >= len(line2):
    while counter_line < len(line):
        if len(line[counter_line]) >= len(line2[counter_line]):
            counter_char = 0
            while counter_char < len(line[counter_line]):
                x = line[counter_line][counter_char]
                y = line2[counter_line][counter_char]
                if x != y:
                    print(str(counter_line + 1) + "c" + str(counter_char))
                    print("< " + line[counter_line])
                    print("------")
                    print("> " + line2[counter_line])
                    break
                counter_char += 1
        else:
            counter_char = 0
            while counter_char < len(line2[counter_line]):
                z = line[counter_line][counter_char]
                a = line2[counter_line][counter_char]
                if z != a:
                    print(str(counter_line + 1) + "c" + str(counter_char))
                    print("< " + line[counter_line])
                    print("------")
                    print("> " + line2[counter_line])
                counter_char += 1
        counter_line += 1

else:
    while counter_line < len(line2):
        if len(line[counter_line]) >= len(line2[counter_line]):
            counter_char = 0
            while counter_char < len(line[counter_line]):
                x = line[counter_line][counter_char]
                y = line2[counter_line][counter_char]
                if x != y:
                    print(str(counter_line + 1) + "c" + str(counter_char))
                    print("< " + line[counter_line])
                    print("------")
                    print("> " + line2[counter_line])
                    break
                counter_char += 1
        else:
            counter_char = 0
            while counter_char < len(line2[counter_line]):
                z = line[counter_line][counter_char]
                a = line2[counter_line][counter_char]
                if z != a:
                    print(str(counter_line + 1) + "c" + str(counter_char))
                    print("< " + line[counter_line])
                    print("------")
                    print("> " + line2[counter_line])
                counter_char += 1
        counter_line += 1

