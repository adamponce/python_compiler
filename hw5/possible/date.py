def date(month, day, year):
    months = {"january": 31, "march": 31, "april": 30, "may": 31, "june": 30, "july": 31, "august": 31, "september": 30, "october": 31, "november": 30, "december": 31}
    is_leap = (year % 4 == 0 and year % 100 != 0) or year % 400 == 0
    if is_leap:
        february = 29
    else:
        february = 28
    if month == "january" and day <= months["january"]:
        return day
    if month == "february" and day <= february:
        return months["january"] + day
    if month == "march" and day <= months["march"]:
        return months["january"] + february + day
    if month == "april" and day <= months["april"]:
        return months["january"] + february + months["march"] + day
    if month == "may" and day <= months["may"]:
        return months["january"] + february + months["march"] + months["april"] + day
    if month == "june" and day <= months["june"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + day
    if month == "july" and day <= months["july"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + day
    if month == "august" and day <= months["august"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + months["july"] + day
    if month == "september" and day <= months["september"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + months["july"] + months["august"] + day
    if month == "october" and day <= months["october"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + months["july"] + months["august"] + months["september"] + day
    if month == "november" and day <= months["november"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + months["july"] + months["august"] + months["september"] + months["october"] + day
    if month == "december" and day <= months["december"]:
        return months["january"] + february + months["march"] + months["april"] + months["may"] + months["june"] + months["july"] + months["august"] + months["september"] + months["october"] + months["november"] + day
    else:
        return -1


def main():
    date1 = input("Type stop or Enter a month, day, year: ")
    while date1 != "stop":
        date1 = date1.split(",")
        month = (date1[0])
        day = int(date1[1])
        year = int(date1[2])
        number = date(month, day, year)
        if number == -1:
            print("Invalid date")
        else:
            print(number)
        date1 = input("Type stop or Enter a month, day, year: ")
