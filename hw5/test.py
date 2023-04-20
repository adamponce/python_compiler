def avg(n1, n2, n3):
    answer = (n1 + n2 + n3) / 3
    return answer


def mile2km(m):
    km = m * 1.6
    return km


m = float(input("Input the miles: "))
km = mile2km(m)
print(km)

print("beginning")
d1 = avg(7, 2, 3)
d2 = avg(d1, 3, 3)
print(str(d1) + " " + str(d2))
print("end")
