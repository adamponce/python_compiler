def day_calculator(input_date):
    months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']
    months_day = {"January": 31, "February": 28, "March": 31, "April": 30, "May": 31, "June": 30, "July": 31, "August": 31, "September": 30, "October": 31, "November": 30, "December": 31}
    months_leap = {"January": 31, "February": 29, "March": 31, "April": 30, "May": 31, "June": 30, "July": 31, "August": 31, "September": 30, "October": 31, "November": 30, "December": 31}
    spl_date = input_date.split(", ")
    input_month = spl_date[0]
    input_day = spl_date[1]
    input_year = spl_date[2]
    dayOFyear = 0
    is_leap = (int(input_year) % 4 == 0 and int(input_year) % 100 != 0) or int(input_year) % 400 == 0
    if is_leap == True:
        if input_month not in months:
            return "Invalid date entered"
        if int(input_day) > months_leap[input_month]:
            return "Invalid date entered"
        if input_month == "January":
            dayOFyear = int(input_day)
        if input_month == "February":
            dayOFyear = 31 + int(input_day)
        if input_month == "March":
            dayOFyear = 60 + int(input_day)
        if input_month == "April":
            dayOFyear = 91 + int(input_day)
        if input_month == "May":
            dayOFyear = 121 + int(input_day)
        if input_month == "June":
            dayOFyear = 152 + int(input_day)
        if input_month == "July":
            dayOFyear = 182 + int(input_day)
        if input_month == "August":
            dayOFyear = 213 + int(input_day)
        if input_month == "September":
            dayOFyear = 244 + int(input_day)
        if input_month == "October":
            dayOFyear = 274 + int(input_day)
        if input_month == "November":
            dayOFyear = 305 + int(input_day)
        if input_month == "December":
            dayOFyear = 335 + int(input_day)
        return dayOFyear
    else:
        if input_month not in months:
            return "Invalid date entered"
        if int(input_day) > months_day[input_month]:
            return "Invalid date entered"
        if input_month == "January":
            dayOFyear = int(input_day)
        if input_month == "February":
            dayOFyear = 31 + int(input_day)
        if input_month == "March":
            dayOFyear = 59 + int(input_day)
        if input_month == "April":
            dayOFyear = 90 + int(input_day)
        if input_month == "May":
            dayOFyear = 120 + int(input_day)
        if input_month == "June":
            dayOFyear = 151 + int(input_day)
        if input_month == "July":
            dayOFyear = 181 + int(input_day)
        if input_month == "August":
            dayOFyear = 212 + int(input_day)
        if input_month == "September":
            dayOFyear = 243 + int(input_day)
        if input_month == "October":
            dayOFyear = 273 + int(input_day)
        if input_month == "November":
            dayOFyear = 304 + int(input_day)
        if input_month == "December":
            dayOFyear = 334 + int(input_day)
        return dayOFyear

def main():
    input_date = input("Please enter stop or a month, day, and year: ")
    while input_date != "stop":
        print("Day of year: " + str(day_calculator(input_date)))
        input_date = input("Please enter stop or a month, day, and year: ")

if __name__ == "__main__":
    main()
