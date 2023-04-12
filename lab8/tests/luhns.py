def validate(card_number):
    lst_val = []
    for i in range(len(card_number)):
        lst_val.append(int(card_number[i]))
    for i in range(len(lst_val) - 2, -1, -2):
        lst_val[i] = lst_val[i] * 2
        if lst_val[i] > 9:
            lst_val[i] = (lst_val[i] // 10) + (lst_val[i] % 10)
    total = 0
    for i in range(len(lst_val)):
        total = lst_val[i] + (lst_val[i] + 1)
    total = sum(lst_val)
    sum_of_lst = total % 10
    if sum_of_lst == 0:
        return True
    else:
        return False

def main():
    card_number = input("Please enter your credit card number: ")
    print(str(validate(card_number)))

if __name__ == '__main__':
    main()
